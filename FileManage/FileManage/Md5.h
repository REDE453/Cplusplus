typedef unsigned int uint32;
#define CHUNK_BYTE 64
#include <string>

class MD5
{
public:
	MD5();
	//���㺯��
	uint32 F(uint32 b, uint32 c, uint32 d)
	{
		return (b & c) | ((~b) & d);
	}
	uint32 G(uint32 b, uint32 c, uint32 d)
	{
		return (b & d) | (c & (~d));
	}
	uint32 H(uint32 b, uint32 c, uint32 d)
	{
		return b ^ c ^ d;
	}
	uint32 I(uint32 b, uint32 c, uint32 d)
	{
		return c ^ (b | (~d));
	}
	//ѭ������
	uint32 leftShift(uint32 number, int shifNumber)
	{
		return (number << shifNumber) | (number >> (32 - shifNumber));
	}
	//��ʼ��
	void init();

	//����
	void reset();

	//����һ�����ݿ��MD5ֵ
	void calMD5(uint32* chunk);

	//�������һ�����ݿ��MD5ֵ������䣬�����
	void calFinalMD5();

	//������ת���ɶ�Ӧ��16�����ַ���
	std::string changeHex(uint32 n);

	std::string getStringMD5(const std::string& str);
	std::string getFileMD5(const char* filePath);
private:
	//ѭ�����Ƶ�λ��     
	static int _leftShift[CHUNK_BYTE];
	//k[i] = floor(2 ^ 32) * (abs(sin(i + 1))
	uint32 _k[CHUNK_BYTE];
	//���ݿ飺64�ֽ�
	char _chunk[CHUNK_BYTE];
	//�����ر���
	//���һ�����ݵ��ֽ���
	uint32 _lastByte;
	//���ֽ���
	unsigned long long _totalByte;
	//MD5��Ϣ
	uint32 _a;
	uint32 _b;
	uint32 _c;
	uint32 _d;
};