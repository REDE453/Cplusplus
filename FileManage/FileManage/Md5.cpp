#include"md5.h"
#include<iostream>
#include<math.h>
#include<fstream>
#include<string>
//初始化static成员
int MD5::_leftShift[64] = { 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7,
12, 17, 22, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20,
4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 6, 10,
15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21 };
MD5::MD5()
{
	init();
}
void MD5::init()
{
	//初始化
	for (int i = 0; i < 64; ++i)
	{
		_k[i] = static_cast<unit32>(abs(sin(i + 1))*pow(2, 32));
	}
	reset();
}
void MD5::reset()
{
	//初始化A,B,C,D;
	_a = 0x67452301;
	_b = 0xefcdab89;
	_c = 0x98badcfe;
	_d = 0x10325476;
	//初始化chunk
	memset(_chunk, 0, CHUNK_BYTE);
	_LastByte = _totalByte = 0;
}
//一个chunk的MD5运算
void MD5::calMD5(unit32 *chunk)
{
	int a = _a, b = _b, c = _c, d = _d;
	int f, g;
	//4byte为一个处理单元
	//执行64次操作
	for (int i = 0; i < 64; ++i)
	{
		//位运算F,G,H,I
		//0-15:F
		/*if (0 <= i < 16) g = i;
		if (16 <= i < 32) g = (5 * i + 1) % 16;
		if (32 <= i < 48) g = (3 * i + 5) % 16;
		if (48 <= i < 63) g = (7 * i) % 16;*/
		if (0 <= i && i <= 15)
		{
			f = F(b, c, d);
			g = i;
		}
		//16-31:G
		else if (16 <= i && i <= 31)
		{
			f = G(b, c, d);
			g = (5 * i + 1) % 16;
		}
		//32-47:H
		else if (32 <= i && i <= 47)
		{
			f = H(b, c, d);
			g = (3 * i + 5) % 16;
		}
		//48-63:I
		else
		{
			f = I(b, c, d);
			g = (7 * i) % 16;
		}
		//更新，加法，循环左移
		int tmp = d;
		d = c;
		c = b;
		b = b + leftShift(a + f + _chunk[g] + _k[i], _leftShift[i]);
		a = tmp;
	}
	//更新A,B,C,D;
	_a += a;
	_b += b;
	_c += c;
	_d += d;
}
//进行填充再进行MD5计算
void MD5::calFinalMD5()
{
	//填充冗余信息：第一个bit位填1数据、剩余填0
	//任何情况下都需要填充至少1byte的冗余信息
	//获取第一个待填充的位置
	char* p = _chunk + _LastByte;
	//首先填充1byte的冗余信息：1000 0000
	*p = 0x80;
	int remainByte = CHUNK_BYTE - _LastByte;
	//如果剩余字节数不够8byte->64bit,不能填充长度信息
	//先处理一块数据,再去构建一个新的数据块，前446位填0.最后64位填长度信息
	if (remainByte < 8)
	{
		//剩余位全部补零，处理一次
		memset(p, 0, remainByte);
		calMD5((unit32*)_chunk);
		//构建一个新的数据块
		memset(_chunk, 0, CHUNK_BYTE);
	}
	else
	{
		//剩余的位全部补0
		memset(p, 0, remainByte);
	}
	//给数据块的最后64位填充原始长度信息
	unsigned long long totalBits = _totalByte;
	totalBits *= 8;
	((unsigned long long*)_chunk)[7] = totalBits;
	calMD5((unit32*)_chunk);
}
std::string MD5::changeHex(unit32 n)
 {
	std::string strMap = "0123456789abcdef";
	std::string ret;
	//获取每一个字节数据
	for (int i = 0; i < 4; ++i)
	{
		//获取一个字节的数据
		int curByte = n >> (i * 8) & 0xff;
		//数据转成16进制字符
		std::string curRet;
		//除16高位  模16低位
		curRet += strMap[curByte / 16];
		curRet += strMap[curByte % 16];
		//字节之间逆序
		ret += curRet;
	}
	return ret;33
}
std::string MD5::getStringMD5(const std::string& str)
{
	if (str.empty())
	{
		return changeHex(_a).append(changeHex(_b)).append(changeHex(_c)).append(changeHex(_d));
	}
	_totalByte = str.size();
	unit32 chunkNum = _totalByte / CHUNK_BYTE;
	const char* strPtr = str.c_str();
	for (int i = 0; i < chunkNum; ++i)
	{
		memcpy(_chunk, strPtr + i * CHUNK_BYTE, CHUNK_BYTE);
		calMD5((unit32*)_chunk);
	}
	//计算最后一块数据：需要填充
	_LastByte = _totalByte % CHUNK_BYTE;
	memcpy(_chunk, strPtr + chunkNum * CHUNK_BYTE, _LastByte);
	calFinalMD5();
	return changeHex(_a).append(changeHex(_b)).append(changeHex(_c)).append(changeHex(_d));
}
std::string MD5::getFileMD5(const char* filePath)
{
 	std::ifstream fin(filePath, std::ifstream::binary);
	if (!fin.is_open())
	{
		std::cout << filePath;
		perror("file open faild!");
		return "";
	}
	while (!fin.eof())
	{
		//1.全部读进来：seek给，tellg获取文件大小！空间换时间；时间效率高
		//fin.seekg(0, fin.end);
		//unit32 length = fin.tellg();
		//fin.seekg(0, fin.beg);
		//char* totalData = new char[length];
		//fin.read(totalData, length);
		//for (int i = 0; i < chunkNum; ++i)
		//{
		//	memcpy(_chunk, strPtr + i * CHUNK_BYTE, CHUNK_BYTE);
		//	calMD5((unit32*)_chunk);
		//}
		////计算最后一块数据：需要填充
		//_LastByte = _totalByte % CHUNK_BYTE;
		//memcpy(_chunk, strPtr + chunkNum * CHUNK_BYTE, _LastByte);
		//calFinalMD5();
		//return changeHex(_a).append(changeHex(_b)).append(changeHex(_c)).append(changeHex(_d));
		//2.每次只读取一块数据；时间换空间；
		fin.read(_chunk, CHUNK_BYTE);
		//是否读取到64字节的内容
		if (CHUNK_BYTE == fin.gcount())
		{
			//说明为最后一块数据
			break;
		}
		_totalByte += CHUNK_BYTE;
		calMD5((unit32*)_chunk);
	}
	//gcount:可以调用多次，始终返回最近一次读入的字节数
	_LastByte = fin.gcount();
	_totalByte += _LastByte;
	calFinalMD5();
	return changeHex(_a).append(changeHex(_b)).append(changeHex(_c)).append(changeHex(_d));
}