/*
학번: 202511210
이름: 김수경
프로그램명: assignment01
날짜: 25.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 20

typedef struct login {
	char id[MAX];
	char pw[MAX];
}Login;

void assignment01();
Login inputLogin(Login login);
int cheakMax(char *idOrPw);
void printLogin(Login login);

int main()
{
	assignment01();

	return 0;
}

void assignment01()
{
	Login login = { 0 };

	login = inputLogin(login);
	printLogin(login);

	return;
}

Login inputLogin(Login login)
{
	do
	{
		printf("ID? ");
		scanf("%s", login.id);
		if (cheakMax(login.id) == 1)
		{
			printf("최대 20글자까지 입력할 수 있습니다.\n");
		}
		else
		{
			break;
		}
	} while (cheakMax(login.id) == 1);
	
	do
	{
		printf("Password? ");
		scanf("%s", login.pw);
		if (cheakMax(login.pw) == 1)
		{
			printf("최대 20글자까지 입력할 수 있습니다.\n");
		}
		else
		{
			break;
		}
	} while (cheakMax(login.pw) == 1);

	return login;
}

void printLogin(Login login)
{
	printf("ID: %s\n", login.id);
	printf("Password: ");

	for (int i = 0; i < strlen(login.pw); i++)
	{
		printf("*");
	}

	return;
}

int cheakMax(char* idOrPw)
{
	if (strlen(idOrPw) > 20)
	{
		return 1;
	}

	return 0;
}