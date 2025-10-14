#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assignment02();
void inputN(int* n);
int sum_of_digits(int n);
void printSum(int result);

int main()
{
    assignment02();

    return 0;
}

void assignment02()
{
    int n = 0;
    int* p = &n;
    int result = 0;

    do {
        inputN(p);
        if (*p == 0)
            return;

        result = sum_of_digits(*p);

        printSum(result);
    } while (1);

    return;
}

void inputN(int* n)
{
    printf("Á¤¼ö? ");
    scanf("%d", n);

    return;
}

int sum_of_digits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sum_of_digits(n / 10);
    }
}

void printSum(int result)
{
    printf("sum of digits: %d\n", result);

    return;
}