//StrcpyLib.cpp:定义静态库的函数strcpy
//

#include"StrStaticLib.h"

#include<stdexcept>

using namespace std;

namespace StringFuncs
{
	char* MyStringFuncs::strcpy(const char* src)
	{
		//实现函数strcpy
		int len = 0;
		const char* p1 = src;
		while (p1++ != 0) len++;

		char* dst = (char*)malloc(len + 1);
		for (int i = 0; i < len; i++)
			dst[i] = src[i];
		dst[len] = 0;
		return dst;
		//函数功能为复制字符串
	}
}
