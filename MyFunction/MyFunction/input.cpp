#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"str.h"
int inputInteger(const char* prompt, int max, int min)	// �Զ������������������Ҫ���ڽ����̻�������գ���Ҫ���û�����һ������ֵ
{
	int result = 0;
	int input_count = 0;
	do
	{
		printf("%s", prompt);	// ��Ļ��ӡ�û�������ʾ�ַ���
		rewind(stdin);	// ��ռ��̻�������ֵ
		input_count = scanf("%d", &result);	// scanf����ֵ��input_count��¼�����Դ˽����ж�
	} while (input_count == 0 || result<min || result>max);
	return result;	// ���û�����ֵ����
}

char inputChar(const char* prompt, const char* validChars)	// �Զ����ַ����뺯��
{
	char result = '\0';
	int input_count = 0;
	do
	{
		printf("%s", prompt);	// ��Ļ��ӡ�û�������ʾ�ַ���
		rewind(stdin);	// ��ռ��̻�������ֵ
		input_count = scanf("%c", &result);	// scanf����ֵ��input_count��¼�����Դ˽����ж�
	} while (input_count == 0 || indexOfChar(validChars,result<0) );
	return result;	// ���û�����ֵ����
}

char* inputStr(char* destination, const char* prompt, int minLength, int maxLength)	// �Զ����ַ������뺯��
{
	int length = 0;
	int input_count = 0;
	do
	{
		printf("%s", prompt);	// ��Ļ��ӡ�û�������ʾ�ַ���
		rewind(stdin);	// ��ռ��̻�������ֵ
		input_count = scanf_s("%s", destination, maxLength);	// scanf����ֵ��input_count��¼�����Դ˽����ж�
		length = strlength(destination);
	} while (input_count == 0 ||length<minLength || length>maxLength);
	return destination;	// ���û�����ֵ����
}