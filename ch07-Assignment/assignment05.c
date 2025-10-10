/*
학번: 202511210
이름: 김수경
프로그램명: assignment17
날짜: 25.9.16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

void assignment17();
int input();
int fillArr(int n, int index);
void printArr(int index);

static int arr[SIZE] = { 0 };

int main()
{
	assignment17();

	return 0;
}

void assignment17()
{
	int index = 0;
	while (index < SIZE)
	{
		int n = input();
		index = fillArr(n, index);
		printArr(index);
	}

	return;
}

void printArr(int index)
{
	for (int i = 0; i < index; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return;
}

int fillArr(int n, int index)
{
	if (index < SIZE)
	{
		arr[index] = n;
		index++;
	}

	return index;
}

int input()
{
	int n = 0;
	printf("배열에 추가할 원소? ");
	scanf("%d", &n);

	return n;
}