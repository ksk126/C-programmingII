/*
학번: 202511210
이름: 김수경
프로그램명: assignment03
날짜: 25.10.10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 128

void assignment03();
void inputStr(char* str);
void changeStr(char* str);
void printStr(char* str);

int main()
{
	assignment03();

	return 0;
}

void assignment03()
{
	char str[MAX];

	inputStr(str);
	changeStr(str);
	printStr(str);

	return;
}

void inputStr(char* str)
{
	printf("문자열? ");
	fgets(str, MAX, stdin);

	return;
}

void changeStr(char* str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if (isupper(str[i]) != 0)
		{
			str[i] = tolower(str[i]);
		}
		else if (islower(str[i]) != 0)
		{
			str[i] = toupper(str[i]);
		}
	}

	return;
}

void printStr(char* str)
{
	printf("변환 후: %s", str);

	return;
}