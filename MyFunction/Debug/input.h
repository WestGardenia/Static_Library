#pragma once

int inputInteger(const char* prompt, int max, int min);	// �Զ������������������Ҫ���ڽ����̻�������գ���Ҫ���û�����һ������ֵ

char inputChar(const char* prompt, const char* validChars);	// �Զ����ַ����뺯��

char* inputStr(char* destination, const char* prompt, int minLength, int maxLength);	// �Զ����ַ������뺯��
