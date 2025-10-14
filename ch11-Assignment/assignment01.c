/*
학번: 202511210
이름: 김수경
프로그램명: assignment01
날짜: 25.10.14
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment01();
void inputN(int *n);
int count_digits(int n);
void printCount(int reuslt);

int main()
{
	assignment01();

	return 0;
}

void assignment01()
{
	int n = 0;
	int* p = &n;
	
	do {
		int result = 0;

		inputN(p);
		if (*p == 0)
			return;

		result = count_digits(n);

		printCount(result);
	} while (1);

	return;
}

void inputN(int *n)
{
	printf("정수? ");
	scanf("%d", n);

	return;
}

int count_digits(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else if (n < 10)
	{
		return 1;
	}
	else
	{
		return 1 + count_digits(n / 10);
	}
}

void printCount(int result)
{
	printf("count of digits: %d\n", result);

	return;
}