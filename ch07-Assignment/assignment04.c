/*
학번: 202511210
이름: 김수경
프로그램명: assignment16
날짜: 25.9.16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void assignment16();
int* fillArr();
int input();
int find_array(int n, int* arr);
void printResult(int i, int n);

int main()
{
	assignment16();

	return 0;
}

void assignment16()
{
	srand(time(NULL));

	int* p = fillArr();
	int n = input();
	int i = find_array(n, p);
	printResult(i, n);

	return;
}

int find_array(int n, int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] == n)
		{
			return i;
		}
	}

	return -1;
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

void printResult(int i, int n)
{
	if (i == -1)
	{
		printf("같은 값을 찾을 수 없습니다.");
		return;
	}
	printf("%d는 %d번째 원소입니다.", n, i);

	return;
}