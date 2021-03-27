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

//��ʼ��
void MD5::init()
{
	//��ʼ��k[i]
	for (int i = 0; i < 64; i++)
	{
		_k[i] = static_cast<uint32>(abs(sin(i + 1.0)) * pow(2.0, 32));
	}
	reset();
}

//����
void MD5::reset()
{
	//��ʼ��a b c d
	_a = 0x67452301;
	_b = 0xefcdab89;
	_c = 0x98badcfe;
	_d = 0x10325476;
	//��ʼ��chunk
	memset(_chunk, 0, CHUNK_BYTE);
	//����
	_lastByte = _totalByte = 0;
}

//����һ�����ݿ��MD5ֵ
void MD5::calMD5(uint32* chunk)
{
	int a = _a;
	int b = _b;
	int c = _c;
	int d = _d;
	int f, g;
	//�ĸ��ֽڴ���һ�Σ���ִ��64��
	for (int i = 0; i < 64; ++i)
	{
		//λ���� F G H I
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

		//�ӷ�����   ѭ������
		int tmp = d;
		d = c;
		c = b;
		b = b + leftShift(a + f + chunk[g] + _k[i], _leftShift[i]);
		a = tmp;
	}
	//����a b c d
	_a += a;
	_b += b;
	_c += c;
	_d += d;
}

//�������һ�����ݿ��MD5ֵ������䣬�����
void MD5::calFinalMD5()
{
	//���������Ϣ���������һ���ֽ�������Ϣ
	//��һλ��1�����ಹ0��
	//��ȡ��һ��������λ��
	char* p = _chunk + _lastByte;
	//l6���Ƶ�80 ���� 1000 0000
	*p++ = 0x80; //�ƶ�����һ��λ��
	//ʣ�������Ϣ
	int  remainByte = CHUNK_BYTE - _lastByte - 1;
	//�ж�ʣ��ĳ����Ƿ�8���ֽ�
	//�����������Ҫ�ٹ���һ�����ݿ飬ǰ448λ��0�����64λ�����Ϣ
	if (remainByte < 8)
	{
		//�Ƚ�ʣ���ȫ����0��
		memset(p, 0, remainByte);
		//���㵱ǰ���ݿ��MD5ֵ
		calMD5((uint32*)_chunk);
		//������һ�����ݿ�
		memset(_chunk, 0, CHUNK_BYTE);
	}
	else
	{
		//ʣ��λȫ����0
		memset(p, 0, remainByte);
	}
	//�����ݿ����64λ����ļ�ԭʼ������Ϣ
	unsigned long long totaBits = _totalByte;
	totaBits *= 8;
	((unsigned long long*)_chunk)[7] = totaBits;
	calMD5((uint32*)_chunk);
}

//������ת���ɶ�Ӧ��16�����ַ���
std::string MD5::changeHex(uint32 n)
{
	std::string num = "0123456789abcdef";
	std::string strNum;
	std::string tmp = "00";
	//ÿ�λ�ȡ4������λ��������Ϣ����Ϊû4λ�ĺ����ñ�ʾһλ16���Ƶ����֣�
	//���Ը����������ַ�����Ӧ����
	//ÿһ���ֽ�����Ҫ��16������Ϣ��������
	for (int i = 0; i < 8; ++i)
	{
		//��֤�ֽ�������
		tmp[1] = num[(n >> (i++ * 4) & 0x0f)];
		tmp[0] = num[(n >> (i * 4) & 0x0f)];
		//����һ���ֽڵ���Ϣ��ÿ���ֽ�����
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
	//�����������ݵ�MD5
	for (int i = 0; i < chunkNum; i++)
	{
		memcpy(_chunk, strPtr + i * CHUNK_BYTE, CHUNK_BYTE);
		calMD5((uint32*)_chunk);
	}
	//�������һ������MD5
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
		//�Ƿ��ȡ��64���ֽ�
		if (fin.gcount() != CHUNK_BYTE)
		{
			//������Ϊ���һ������
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