#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>
#define MAX 128

void assignment01();
void inputStr(char* str);
void changeStr(char* str);
void printStr(char* str);

int main()
{
	assignment01();

	return 0;
}

void assignment01()
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