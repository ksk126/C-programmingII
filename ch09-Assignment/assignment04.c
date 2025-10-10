/*
�й�: 202511210
�̸�: �����
���α׷���: assignment05
��¥: 25.10.10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 128

void assignment05();
void inputStr(char* str, const char* context);
void changeStr(char *str1, char *str2);
int strcmp_ic(char* str1, char* str2);
void printResult(int result, char *str1, char *str2);

int main()
{
	assignment05();

	return 0;
}

void assignment05()
{
	char str1[MAX];
	char str2[MAX];

	char strcpy1[MAX];
	char strcpy2[MAX];

	inputStr(str1, "ù ��° ���ڿ� ? ");
	inputStr(str2, "�� ��° ���ڿ� ? ");

	strcpy(strcpy1, str1);
	strcpy(strcpy2, str2);
	
	changeStr(strcpy1, strcpy2);

	int result = strcmp_ic(strcpy1, strcpy2);

	printResult(result, str1, str2);
	
	return;
}

void inputStr(char* str, const char* context)
{
	printf("%s", context);
	fgets(str, MAX, stdin);

	str[strcspn(str, "\n")] = '\0';

	return;
}

void changeStr(char *str1, char *str2)
{
	str1 = _strupr(str1);
	str2 = _strupr(str2);

	return;
}

int strcmp_ic(char* str1, char* str2)
{
	for (int i = 0; i < MAX; i++)
	{
		if (str1[i] != str2[i])
		{
			if (str1 < str2)
			{
				return -1;				}
			else
			{
				return 1;
			}
		}
	}

	return 0;
}

void printResult(int result, char *str1, char *str2)
{
	if (result > 0)
	{
		printf("%s�� %s���� Ů�ϴ�.", str1, str2);
	}
	else if (result < 0)
	{
		printf("%s�� %s���� �۽��ϴ�.", str1, str2);
	}
	else if (result == 0)
	{
		printf("%s�� %s�� �����ϴ�.", str1, str2);
	}

	return;
}