/*
학번: 202511210
이름: 김수경
프로그램명: assignment08
날짜: 25.10.18
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment08();
void fill_array(int* arr, int sz, int (*function)(int n));
void print_array(int* arr, int sz, const char* str);
int fill_it(int n);
int increment_it(int n);
int square_it(int n);
int zero_it(int n);

typedef struct contact {
	int (*fp)(int n);
	const char *str;
}Contact;

int main()
{
	assignment08();

	return 0;
}

void assignment08()
{
	Contact contact[4] = {
		{fill_it,"배열을 0부터 1씩 커지는 값으로 채울 때: "},
		{increment_it,"배열을 현재 원소보다 1만큼 큰 값으로 채울 때: "},
		{square_it,"배열을 현재 원소의 제곱으로 채울 때: "},
		{zero_it,"배열을 0으로 채울 때: "}
	};

	int result[10] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		fill_array(result, sizeof(result) / sizeof(result[0]), contact[i].fp);
		print_array(result, sizeof(result) / sizeof(result[0]), contact[i].str);
	}


	return;
}

void fill_array(int* arr, int sz, int (*function)(int n))
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = function(arr[i]);
	}
	return;
}

int fill_it(int n)
{
	static int num = 0;
	return num++;
}

int increment_it(int n)
{
	return n+1;
}

int square_it(int n)
{
	return n * n;
}

int zero_it(int n)
{
	return 0;
}

void print_array(int* arr, int sz, const char* str)
{
	printf("%s\n\t", str);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return;
}