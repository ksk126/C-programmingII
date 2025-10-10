/*
학번: 202511210
이름: 김수경
프로그램명: assignment12
날짜: 25.9.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 10

void assignment12();
int find_all_in_array(int* n, int* arr, int* index);
void input(int* n, int* arr);
void print(int* arr, int* index, int findIdx);

int main()
{
	assignment12();

	return 0;
}

void assignment12()
{
	int arr[MAX] = { 0 };
	int index[MAX] = { 0 };
	int n = 0;
	int findIndex = 0;

	input(&n, arr);
	findIndex = find_all_in_array(&n, arr, index);
	print(arr, index, findIndex);

	return;
}

int find_all_in_array(int* n, int* arr, int* index)
{
	int j = 0;
	for (int i = 0; i < MAX; i++)
	{
		if (arr[i] == *n)
		{
			index[j] = i;
			j++;
		}
	}

	return j;
}

void input(int* n, int* arr)
{
	printf("배열 입력값 10개?\n");
	for (int i = 0; i < MAX; i++)
	{
		scanf("%d", &arr[i]);
	}

	printf("찾을 값? ");
	scanf("%d", n);

	return;
}

void print(int* arr, int* index, int findIdx)
{
	printf("찾은 항목은 모두 %d개입니다.\n", findIdx);
	printf("찾은 항목의 인덱스: ");
	for (int i = 0; i < findIdx; i++)
	{
		printf("%d ", index[i]);
	}

	return;
}