/*
학번: 202511210
이름: 김수경
프로그램명: assignment04
날짜: 25.10.14
*/

#define _CRT_SECURE_NOWARNINGS
#include <stdio.h>
#define MAX 20

void assignment03();
int fibonacci(int n);
void printFibonacci();

static int arr[20] = { 0 };

int main()
{
	assignment03();

	return 0;
}

void assignment03()
{
	fibonacci(0);
	printFibonacci();
	return;
}

int fibonacci(int n)
{
	int i = 0;

	if (n == 0)
	{
		arr[i++] = 1;
		return 1;
	}
	else if (n == 1)
	{
		arr[i++] = 1;
		return arr[i-1];
	}
	else
	{
		arr[i++] = fibonacci(n - 2) + fibonacci(n - 1);
		return arr[i-1];
	}

}

void printFibonacci()
{
	for (int i = 0; i < 20; i++)
	{
		printf("%d ", fibonacci(i));
	}

	return;
}