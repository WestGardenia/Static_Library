#define _CRT_SECURE_NO_WARNINGS
#include<assert.h>
unsigned int strlength(const char* str)
{
	unsigned int count = 0;
	const char* cur = str;
	while (*cur != '\0')
	{
		count++;
		cur++;
	}
	return count;
}

int indexOfChar(const char* str, char ch)
{
	int index = 0;
	while (*str != '\0')
	{
		if (*str == ch)
		{
			return index;
		}
		index++;
		str++;
	}
	return -1;	// 没有对应字符，返回-1表示输入值有问题
}

void toLowerCase(char* str)	// 大写字母变小写
{
	while (*str != '\0')
	{
		if (*str > 'A' && *str<'Z')
		{
			*str += 32;
		}
		str++;
	}
}

void toUpperCase(char* str)	// 小写字母转大写
{
	while (*str != '\0')
	{
		if (*str > 'a' && *str < 'z')
		{
			*str -= 32;
		}
		str++;
	}
}

char* strCopy(char* destination, const char* source)	//字符串复制
{
	assert(destination);
	char* cur = destination;
	while (*source != '\0')
	{
		*cur = *source;
		source++;
		cur++;
	}
	return destination;
}