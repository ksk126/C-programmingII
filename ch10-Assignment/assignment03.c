/*
�й�: 202511210
�̸�: �����
���α׷���: assignment04
��¥: 25.10.11
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 20

typedef struct date {
	int year;
	int month;
	int day;
} DATE;

void assignment04();
void inputDate(DATE* data);
void printDate(DATE data);

int main()
{
	assignment04();

	return 0;
}

void assignment04()
{
	DATE data;

	inputDate(&data);
	printDate(data);

	return;
}

void inputDate(DATE* data)
{
	printf("��? ");
	scanf("%d", &data->year);
	printf("��? ");
	scanf("%d", &data->month);
	printf("��? ");
	scanf("%d", &data->day);

	return;
}

void printDate(DATE data)
{
	printf("%d/%d/%d\n", data.year, data.month, data.day);

	return;
}
