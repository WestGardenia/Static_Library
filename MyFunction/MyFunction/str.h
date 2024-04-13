#pragma once


unsigned int strlength(const char* str); 

int indexOfChar(const char* str, char ch);	// 返回字符串中特定字符的下标

void toLowerCase(char* str);	// 大写字母变小写

void toUpperCase(char* str);	// 小写字母转大写

char* strCopy(char* destination, const char* source);
