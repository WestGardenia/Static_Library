#pragma once

int inputInteger(const char* prompt, int max, int min);	// 自定义数据输出函数。主要用于将键盘缓冲区清空，并要求用户输入一个整型值

char inputChar(const char* prompt, const char* validChars);	// 自定义字符输入函数

char* inputStr(char* destination, const char* prompt, int minLength, int maxLength);	// 自定义字符串输入函数
