#pragma once
#include<string>
#define CHUNK_BYTE 64
typedef unsigned int unit32;
class MD5
{
public:
	//λ���㺯��FGHJ
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
	//ѭ������
	unit32 leftShift(unit32 number, int ShiftNumber)
	{
		return (number << ShiftNumber) | (number >> (32 - ShiftNumber));
	}
	MD5();
	void init();
	void reset();
	//һ��chunk��MD5����
	void calMD5(unit32 *chunk);
	//��������ٽ���MD5����
	void calFinalMD5();
	//��һ���������ݻ��ɶ�Ӧ��16�����ַ���
	std::string changeHex(unit32 n);
	std::string getStringMD5(const std::string& str);
	std::string getFileMD5(const char* filePath);
private:
	//ѭ����λ��λ��
	static int _leftShift[CHUNK_BYTE];
	//k[i]:K[i] = floor(2^(32) * abs(sin(i + 1)))
	unit32 _k[CHUNK_BYTE];
	//���ݿ飺64byte
	char _chunk[CHUNK_BYTE];
	//�����صı���
	//���һ�����ݵ��ֽ���
	unit32 _LastByte;
	//���ֽ���
	unit32 _totalByte;
	//MD5��Ϣ
	unit32 _a;
	unit32 _b;
	unit32 _c;
	unit32 _d;
};

