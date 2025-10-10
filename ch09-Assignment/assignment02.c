/*
학번: 202511210
이름: 김수경
프로그램명: assignment02
날짜: 25.10.10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 128

void assignment02();
void inputS(char* str);
void printS(char* result);
void remove_space(char* str, char* resultStr);

int main()
{
	assignment02();

	return 0;
}

void assignment02()
{
	char str[MAX];
	char* p = str;
	int result[MAX];
	char* rp = result;

	inputS(p);
	remove_space(p, rp);
	printS(rp);

	return;
}

void inputS(char* str)
{
	printf("문자열? ");
	fgets(str, MAX, stdin);
	return;
}

void printS(char* result)
{
	printf("공백 문자 제거후: %s", result);

	return;
}

void remove_space(char* str, char* resultStr)
{
	int j = 0;
	for (int i = 0; str[i]!='\0'; i++)
	{

		if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\f' && str[i] != '\r' && str[i] != '\v')
		{
			resultStr[j++] = str[i];
		}
	}
	resultStr[j] = '\0';

	return;
}