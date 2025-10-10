/*
학번: 202511210
이름: 김수경
프로그램명: assignment12
날짜: 25.10.10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 128

typedef struct text {
	char str[MAX];
	int n;
} Text;

void assignment12();
Text inputText(Text text);
void rotateText(Text text, char *result);
void printText(char* result);

int main()
{
	assignment12();

	return 0;
}

void assignment12()
{
	Text text = { 0 };
	char result[MAX];

	text = inputText(text);

	if (text.n == 0)
	{
		return;
	}

	rotateText(text, result);

	printText(result);

	return;
}

Text inputText(Text text)
{
	if (text.str == 0)
	{
		printf("문자열? ");
		fgets(text.str, MAX, stdin);

		text.str[strcspn(text.str, "\n")] = '\0';
	}

	printf("이동할 글자수? ");
	scanf("%d", &text.n);

	return text;
}

void rotateText(Text text, char *result)
{
	int len = strlen(text.str);

	strncpy(result, text.str + len - text.n, text.n);
	strncpy(result + text.n, text.str, len - text.n);
	result[len] = '\0';

	return;
}

void printText(char* result)
{
	printf("%s", result);

	return;
}