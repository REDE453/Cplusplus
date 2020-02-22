#pragma once
#include<string>
#define CHUNK_BYTE 64
typedef unsigned int unit32;
class MD5
{
public:
	//位运算函数FGHJ
	//F(x, y, z) = (x & y) | ((~x) & z)
	//G(x, y, z) = (x & z) | (y & (~z))
	//H(x, y, z) = x ^ y ^ z
	//I(x, y, z) = y ^ (x | (~z))
	unit32 F(unit32 b, unit32 c, unit32 d)
	{
		return (b&c) | ((~b)&d);
	}
	unit32 G(unit32 b, unit32 c, unit32 d)
	{
		return (b&d) | (c&(d));
	}
	unit32 H(unit32 b, unit32 c, unit32 d)
	{
		return b ^ c^d;
	}
	unit32 I(unit32 b, unit32 c, unit32 d)
	{
		return c ^ (b | (~d));
	}
	//循环左移
	unit32 leftShift(unit32 number, int ShiftNumber)
	{
		return (number << ShiftNumber) | (number >> (32 - ShiftNumber));
	}
	MD5();
	void init();
	void reset();
	//一个chunk的MD5运算
	void calMD5(unit32 *chunk);
	//进行填充再进行MD5计算
	void calFinalMD5();
	//把一个整形数据换成对应的16进制字符串
	std::string changeHex(unit32 n);
	std::string getStringMD5(const std::string& str);
	std::string getFileMD5(const char* filePath);
private:
	//循环移位的位数
	static int _leftShift[CHUNK_BYTE];
	//k[i]:K[i] = floor(2^(32) * abs(sin(i + 1)))
	unit32 _k[CHUNK_BYTE];
	//数据块：64byte
	char _chunk[CHUNK_BYTE];
	//填充相关的变量
	//最后一块数据的字节数
	unit32 _LastByte;
	//总字节数
	unit32 _totalByte;
	//MD5信息
	unit32 _a;
	unit32 _b;
	unit32 _c;
	unit32 _d;
};

