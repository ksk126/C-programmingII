/*
학번: 202511210
이름: 김수경
프로그램명: assignment08
날짜: 25.9.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

void assignment08();
void input(int* p);
void fill_array(int* p);
void print();

int arr[MAX] = { 0 };

int main()
{
	assignment08();

	return 0;
}

void assignment08()
{
	int p = 0;

	input(&p);
	fill_array(&p);
	print();

	return;
}

void input(int* p)
{
	printf("¹è¿­ÀÇ ¿ø¼Ò¿¡ ÀúÀåÇÒ °ª? ");
	scanf("%d", p);

	return;
}

void fill_array(int* p)
{
	for (int i = 0; i < MAX; i++)
	{
		arr[i] = *p;
	}

	return;
}

void print()
{
	for (int i = 0; i < MAX; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return;
}