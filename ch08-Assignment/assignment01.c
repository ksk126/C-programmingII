/*
학번: 202511210
이름: 김수경
프로그램명: assignment01
날짜: 25.9.18
*/

#include <stdio.h>
#define SIZE 3

void assignment01();
void print(double* p);

int main()
{
	assignment01();

	return 0;
}

void assignment01()
{
	double arr[SIZE] = { 0 };
	double* p = arr;

	print(p);

	return;
}

void print(double* p)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("x[%d]?? ??¼?: %p\n", i, (void*)&p[i]);
	}

	return;
}