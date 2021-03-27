#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "Md5.h"
#include <math.h>
#include <iostream>
#include <fstream>

int MD5::_leftShift[64] = { 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7,
12, 17, 22, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20,
4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 6, 10,
15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21 };

MD5::MD5()
{
	init();
}

//初始化
void MD5::init()
{
	//初始化k[i]
	for (int i = 0; i < 64; i++)
	{
		_k[i] = static_cast<uint32>(abs(sin(i + 1.0)) * pow(2.0, 32));
	}
	reset();
}

//重置
void MD5::reset()
{
	//初始化a b c d
	_a = 0x67452301;
	_b = 0xefcdab89;
	_c = 0x98badcfe;
	_d = 0x10325476;
	//初始化chunk
	memset(_chunk, 0, CHUNK_BYTE);
	//重置
	_lastByte = _totalByte = 0;
}

//计算一个数据块的MD5值
void MD5::calMD5(uint32* chunk)
{
	int a = _a;
	int b = _b;
	int c = _c;
	int d = _d;
	int f, g;
	//四个字节处理一次，共执行64次
	for (int i = 0; i < 64; ++i)
	{
		//位运算 F G H I
		//F 0 - 15
		if (0 <= i && i <= 15)
		{
			f = F(b, c, d);
			g = i;
		}
		//G 16 - 31
		else if (16 <= i && i <= 31)
		{
			f = G(b, c, d);
			g = (5 * i + 1) % 16;
		}
		//H 32 - 47
		else if (32 <= i && i <= 47)
		{
			f = H(b, c, d);
			g = (3 * i + 5) % 16;
		}
		//I 48 - 63
		else
		{
			f = I(b, c, d);
			g = (7 * i) % 16;
		}

		//加法运算   循环左移
		int tmp = d;
		d = c;
		c = b;
		b = b + leftShift(a + f + chunk[g] + _k[i], _leftShift[i]);
		a = tmp;
	}
	//更新a b c d
	_a += a;
	_b += b;
	_c += c;
	_d += d;
}

//计算最后一块数据块的MD5值，先填充，后计算
void MD5::calFinalMD5()
{
	//填充冗余信息，至少填充一个字节冗余信息
	//第一位补1，其余补0；
	//获取第一个待填充的位置
	char* p = _chunk + _lastByte;
	//l6进制的80 就是 1000 0000
	*p++ = 0x80; //移动到下一个位置
	//剩余填充信息
	int  remainByte = CHUNK_BYTE - _lastByte - 1;
	//判断剩余的长度是否够8个字节
	//如果不够则需要再构建一个数据块，前448位填0，最后64位填长度信息
	if (remainByte < 8)
	{
		//先将剩余的全部补0；
		memset(p, 0, remainByte);
		//计算当前数据块的MD5值
		calMD5((uint32*)_chunk);
		//开辟下一块数据块
		memset(_chunk, 0, CHUNK_BYTE);
	}
	else
	{
		//剩余位全部给0
		memset(p, 0, remainByte);
	}
	//给数据块最后64位填充文件原始长度信息
	unsigned long long totaBits = _totalByte;
	totaBits *= 8;
	((unsigned long long*)_chunk)[7] = totaBits;
	calMD5((uint32*)_chunk);
}

//将整数转化成对应的16进制字符串
std::string MD5::changeHex(uint32 n)
{
	std::string num = "0123456789abcdef";
	std::string strNum;
	std::string tmp = "00";
	//每次获取4个比特位的数字信息，因为没4位的和正好表示一位16进制的数字，
	//可以根据上述的字符串对应起来
	//每一个字节则需要将16进制信息保存起来
	for (int i = 0; i < 8; ++i)
	{
		//保证字节内有序
		tmp[1] = num[(n >> (i++ * 4) & 0x0f)];
		tmp[0] = num[(n >> (i * 4) & 0x0f)];
		//保存一个字节的信息，每个字节逆序
		strNum += tmp;
	}
	return strNum;
}

std::string MD5::getStringMD5(const std::string& str)
{
	if (str.empty())
	{
		return changeHex(_a).append(changeHex(_b)).append(changeHex(_c)).append(changeHex(_d));
	}
	_totalByte = str.size();
	uint32 chunkNum = _totalByte / CHUNK_BYTE;
	const char* strPtr = str.c_str();
	//计算整块数据的MD5
	for (int i = 0; i < chunkNum; i++)
	{
		memcpy(_chunk, strPtr + i * CHUNK_BYTE, CHUNK_BYTE);
		calMD5((uint32*)_chunk);
	}
	//计算最后一块数据MD5
	_lastByte = _totalByte % CHUNK_BYTE;
	memcpy(_chunk, strPtr + chunkNum * CHUNK_BYTE, _lastByte);
	calFinalMD5();
	return changeHex(_a).append(changeHex(_b)).append(changeHex(_c)).append(changeHex(_d));
}

std::string MD5::getFileMD5(const char* filePath)
{
	std::ifstream fin(filePath, std::ifstream::binary);
	if (fin.is_open())
	{
		std::cout << filePath;
		perror("file open failed!");
	}
	while (!fin.eof())
	{
		fin.read(_chunk, CHUNK_BYTE);
		//是否读取了64个字节
		if (fin.gcount() != CHUNK_BYTE)
		{
			//不足则为最后一块数据
			break;
		}
		_totalByte += CHUNK_BYTE;
		calMD5((uint32*)_chunk);
	}
	_lastByte = fin.gcount();
	_totalByte += _lastByte;
	calFinalMD5();
	return changeHex(_a).append(changeHex(_b)).append(changeHex(_c)).append(changeHex(_d));
}