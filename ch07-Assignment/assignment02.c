/*
학번: 202511210
이름: 김수경
프로그램명: assignment07
날짜: 25.9.16
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 20

void assignment07();
void fill_array(int* arr, int n);
int input();
void printResult(int* arr);

int main()
{
	assignment07();

	return 0;
}

void assignment07()
{
	int arr[SIZE] = { 0 };

	int n = input();
	fill_array(arr, n);
	printResult(arr);

	return;
}

int input()
{
	int n = 0;
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &n);

	return n;
}

void fill_array(int* arr, int n)
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = n;
	}

	return;
}

void printResult(int* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
}