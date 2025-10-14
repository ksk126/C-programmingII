/*
학번: 202511210
이름: 김수경
프로그램명: assignment03
날짜: 25.10.14
*/

#define _CRT_SECURE_NOWARNINGS
#include <stdio.h>
#define MAX 20

void assignment03();
int fibonacci(int n);
void printFibonacci(int n);

int main()
{
	assignment03();

	return 0;
}

void assignment03()
{
	printFibonacci(1);
	return;
}

int fibonacci(int n)
{
	if (n==0 || n == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci(n - 1) + fibonacci(n - 2);
	}
}

void printFibonacci(int n)
{
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", fibonacci(i));
	}
}