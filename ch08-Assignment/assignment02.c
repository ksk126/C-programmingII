/*
학번: 202511210
이름: 김수경
프로그램명: assignment02
날짜: 25.9.18
*/

#include <stdio.h>
#define SIZE 10

void assignment02();
void print(double* arr);

int main()
{
	assignment02();

	return 0;
}

void assignment02()
{
	double arr[SIZE] = { 1.0, 8.0, 4.0, 7.0, 10.0, 6.0, 2.0, 3.0, 5.0, 9.0 };
	print(arr);

	return;
}

void print(double* arr)
{
	for (int i = 0; i < SIZE; i++)
	{
		printf("%.2lf ", arr[i]);
	}

	return;
}