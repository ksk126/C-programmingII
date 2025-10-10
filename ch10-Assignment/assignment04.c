/*
학번: 202511210
이름: 김수경
프로그램명: assignment05
날짜: 25.10.11
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#define MAX 20

typedef struct date {
	int year;
	int month;
	int day;
} DATE;

void assignment05();
void setAsToday(DATE* data);
void printDate(DATE data);

int main()
{
	assignment05();

	return 0;
}

void assignment05()
{
	DATE data = { 0, 0, 0 };

	setAsToday(&data);
	printDate(data);

	return;
}

void setAsToday(DATE* data)
{
	time_t t = time(NULL);
	struct tm* today = localtime(&t);

	data->year = today->tm_year + 1900;
	data->month = today->tm_mon + 1;
	data->day = today->tm_mday;

	return;
}

void printDate(DATE data)
{
	printf("오늘 날짜는 %d/%d/%d 입니다.\n", data.year, data.month, data.day);

	return;
}