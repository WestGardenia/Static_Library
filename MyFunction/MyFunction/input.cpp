#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"str.h"
int inputInteger(const char* prompt, int max, int min)	// 自定义数据输出函数。主要用于将键盘缓冲区清空，并要求用户输入一个整型值
{
	int result = 0;
	int input_count = 0;
	do
	{
		printf("%s", prompt);	// 屏幕打印用户输入提示字符串
		rewind(stdin);	// 清空键盘缓存区的值
		input_count = scanf("%d", &result);	// scanf返回值用input_count记录，并以此进行判断
	} while (input_count == 0 || result<min || result>max);
	return result;	// 将用户输入值返回
}

char inputChar(const char* prompt, const char* validChars)	// 自定义字符输入函数
{
	char result = '\0';
	int input_count = 0;
	do
	{
		printf("%s", prompt);	// 屏幕打印用户输入提示字符串
		rewind(stdin);	// 清空键盘缓存区的值
		input_count = scanf("%c", &result);	// scanf返回值用input_count记录，并以此进行判断
	} while (input_count == 0 || indexOfChar(validChars,result<0) );
	return result;	// 将用户输入值返回
}

char* inputStr(char* destination, const char* prompt, int minLength, int maxLength)	// 自定义字符串输入函数
{
	int length = 0;
	int input_count = 0;
	do
	{
		printf("%s", prompt);	// 屏幕打印用户输入提示字符串
		rewind(stdin);	// 清空键盘缓存区的值
		input_count = scanf_s("%s", destination, maxLength);	// scanf返回值用input_count记录，并以此进行判断
		length = strlength(destination);
	} while (input_count == 0 ||length<minLength || length>maxLength);
	return destination;	// 将用户输入值返回
}