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
	return -1;	// û�ж�Ӧ�ַ�������-1��ʾ����ֵ������
}

void toLowerCase(char* str)	// ��д��ĸ��Сд
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

void toUpperCase(char* str)	// Сд��ĸת��д
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

char* strCopy(char* destination, const char* source)	//�ַ�������
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