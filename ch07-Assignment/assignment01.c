/*
학번: 202511210
이름: 김수경
프로그램명: assignment05
날짜: 25.9.16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void assignment05();
int* fillArr();
int input();
void findN(int n, int* arr);

int main()
{
	assignment05();

	return 0;
}

void assignment05()
{
	srand(time(NULL));

	int* p = fillArr();
	int n = input();
	findN(n, p);

	return;
}

void findN(int n, int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == n)
		{
			printf("%d는 %d번째 원소입니다.\n", n, i + 1);
			return;
		}
	}
	printf("같은 값을 찾을 수 없습니다.");

	return;
}

int input()
{
	int n = 0;

	printf("찾을 값? ");
	scanf("%d", &n);

	return n;
}

int* fillArr()
{
	int arr[SIZE] = { 0 };

	for (int i = 0; i < SIZE; i++)
	{
		int random = rand() % 100 + 1;
		arr[i] = random;
	}

	int* p = arr;

	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return p;
}