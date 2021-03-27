typedef unsigned int uint32;
#define CHUNK_BYTE 64
#include <string>

class MD5
{
public:
	MD5();
	//运算函数
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
	//循环左移
	uint32 leftShift(uint32 number, int shifNumber)
	{
		return (number << shifNumber) | (number >> (32 - shifNumber));
	}
	//初始化
	void init();

	//重置
	void reset();

	//计算一个数据块的MD5值
	void calMD5(uint32* chunk);

	//计算最后一块数据块的MD5值，先填充，后计算
	void calFinalMD5();

	//将整数转化成对应的16进制字符串
	std::string changeHex(uint32 n);

	std::string getStringMD5(const std::string& str);
	std::string getFileMD5(const char* filePath);
private:
	//循环左移的位数     
	static int _leftShift[CHUNK_BYTE];
	//k[i] = floor(2 ^ 32) * (abs(sin(i + 1))
	uint32 _k[CHUNK_BYTE];
	//数据块：64字节
	char _chunk[CHUNK_BYTE];
	//填充相关变量
	//最后一块数据的字节数
	uint32 _lastByte;
	//总字节数
	unsigned long long _totalByte;
	//MD5信息
	uint32 _a;
	uint32 _b;
	uint32 _c;
	uint32 _d;
};