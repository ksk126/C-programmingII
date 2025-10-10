/*
학번: 202511210
이름: 김수경
프로그램명: assignment06
날짜: 25.10.11
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define HOLIDAY_COUNT 17

typedef struct date {
	int year;
	int month;
	int day;
} DATE;

void assignment06();
int isSameDate(DATE input, DATE holiday);
void checkHoliday(DATE input, DATE holidays[], int count);

int main()
{
	assignment06();

	return 0;
}

void assignment10_06()
{
	DATE holidays[HOLIDAY_COUNT] = {
		{ 2020,  1,  1 }, { 2020,  1, 24 },
		{ 2020,  1, 25 }, { 2020,  1, 26 },
		{ 2020,  1, 27 }, { 2020,  3,  1 },
		{ 2020,  4, 15 }, { 2020,  4, 30 },
		{ 2020,  5,  5 }, { 2020,  6,  6 },
		{ 2020,  8, 15 }, { 2020,  9, 30 },
		{ 2020, 10,  1 }, { 2020, 10,  2 },
		{ 2020, 10,  3 }, { 2020, 10,  9 },
		{ 2020, 12, 25 }
	};

	DATE input;

	while (1)
	{
		printf("날짜(연월일)? ");
		scanf("%d %d %d", &input.year, &input.month, &input.day);

		if (input.year == 0 && input.month == 0 && input.day == 0)
			break;

		checkHoliday(input, holidays, HOLIDAY_COUNT);
	}

	return;
}

int isSameDate(DATE input, DATE holiday)
{
	return (input.year == holiday.year &&
		input.month == holiday.month &&
		input.day == holiday.day);
}

void checkHoliday(DATE input, DATE holidays[], int count)
{
	int i;
	for (i = 0; i < count; i++)
	{
		if (isSameDate(input, holidays[i]))
		{
			printf("%d/%d/%d은 공휴일입니다.\n", input.year, input.month, input.day);
			return;
		}
	}

	printf("%d/%d/%d은 공휴일이 아닙니다.\n", input.year, input.month, input.day);
	return;
}
