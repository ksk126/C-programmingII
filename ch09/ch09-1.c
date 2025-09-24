/*
학번: 202511210
이름: 김수경
프로그램명: practice1
날짜: 25.09.24
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct student {
    char name[24];
    char id[16];
    char major[32];
    int year;
}Student;

void run();
void inputStudent(char* str);
void tokStudent(char* str, Student* data, int* idx);
void printStudent(Student* data, int* idx);

int main()
{
    run();

    return 0;
}

void run()
{
    Student data[128] = { 0 };
    char str[128];
    int idx = 0;

    do {
        inputStudent(str);

        if (strcmp(str, "exit") == 0)
        {
            break;
        }

        tokStudent(str, data, &idx);
        printStudent(data, &idx);
    } while (1);

    return;
}

void inputStudent(char* str)
{
    printf("이름|학번|학과|학년(정수) 입력(종료하려면 exit): ");
    gets_s(str, 128);
    str[strcspn(str, "\n")] = 0;

    return;
}

void tokStudent(char* str, Student* data, int* idx)
{
    char* token = 0;
    char* context = NULL;

    token = strtok_s(str, "|", &context);

    for (int i = 0; i <= 3; i++)
    {
        if (token != NULL)
        {
            if (i == 0)
            {
                strcpy(data[*idx].name, token);
                token = strtok_s(NULL, "|", &context);
            }
            else if (i == 1)
            {
                strcpy(data[*idx].id, token);
                token = strtok_s(NULL, "|", &context);
            }
            else if (i == 2)
            {
                strcpy(data[*idx].major, token);
                token = strtok_s(NULL, "|", &context);
            }
            else
            {
                data[*idx].year = atoi(token);
                token = NULL;
            }
        }
    }
    (*idx)++;

    return;
}

void printStudent(Student* data, int* idx)
{
    printf("\n");

    for (int i = 0; i < *idx; i++)
    {
        printf("%s ", data[i].name);
        printf("%s ", data[i].id);
        printf("%s ", data[i].major);
        printf("%d\n", data[i].year);
    }

    return;
}