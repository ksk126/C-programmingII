/*
학번: 202511210
이름: 김수경
프로그램명: assignment16
날짜: 25.10.10
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 20

typedef struct login {
	char id[MAX];
	char pw[MAX];
}Login;

void assignment16();
void inputLogin(char* inputId, char* inputPw);
int compareLogin(char* inputId, char* inputPw, Login* login);
void printLogin(int result);

int main()
{
	assignment16();

	return 0;
}

void assignment16()
{
	Login login[MAX] = {
		{"parkjimin", "@BestOfMe@" },
		{"guest", "idontknow"}
	};

	char inputId[MAX];
	char inputPw[MAX];
	int result = 0;

	do {
		inputLogin(inputId, inputPw);
		result = compareLogin(inputId, inputPw, login);
		printLogin(result);
	} while (result != 0);

	return;
}

void inputLogin(char* inputId, char* inputPw)
{
	printf("ID: ");
	scanf("%s", inputId);
	printf("PW: ");
	scanf("%s", inputPw);

	return;
}

int compareLogin(char* inputId, char* inputPw, Login* login)
{
	for (int i = 0; i < MAX; i++)
	{
		if (login[i].id == 0)
		{
			break;
		}
		if (strcmp(inputId, login[i].id) == 0)
		{
			if (strcmp(inputPw, login[i].pw) == 0)
			{
				return 0;
			}
			return 1;
		}
	}

	return -1;
}

void printLogin(int result)
{
	if (result == 0)
	{
		printf("로그인 성공!");
	}
	else if (result == -1)
	{
		printf("해당 id가 없습니다.\n\n");
	}
	else if (result == 1)
	{
		printf("패스워드가 틀렸습니다.\n\n");
	}

	return;
}