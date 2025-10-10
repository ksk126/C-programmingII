#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 128

void assignment01();
void inputS(char *str);
int computeS(char *str);
void printS(int result);

int main()
{
	assignment01();

	return 0;
}

void assignment01()
{
	char str[MAX];
	char *p = str;
	int result = 0;

	inputS(p);
	result = computeS(p);
	printS(result);

	return;
}

void inputS(char *str)
{
	printf("���ڿ�? ");
	fgets(str, MAX, stdin);
	return;
}

int computeS(char *str)
{
	int result = 0;

	for (int i = 0; i < MAX; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}

		switch (str[i])
		{
		case ' ':
		case '\n':
		case '\t':
		case '\f':
		case '\r':
		case '\v':
			result++;
			break;
		}
	}

	return result;
}

void printS(int result)
{
	printf("���� ������ ����: %d", result-1); //fgets�� �޾Ƽ� ���� ���ڿ� ���� \n ���ֱ�

	return;
}