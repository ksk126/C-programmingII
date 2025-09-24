/*
학번: 202511210
이름: 김수경
프로그램명: assignment03
날짜: 25.10.01
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 20
#define MAXARR 5

typedef struct login {
	char id[MAX];
	char pw[MAX];
}Login;

void assignment03();
Login inputLogin(Login login);
int cheakLogin(Login *login, int index);

int main()
{
	assignment03();

	return 0;
}

void assignment03()
{
	Login login[MAXARR] = {
		{ "guest", "idontknow" }
};

	for (int i = 0; i < MAXARR; i++)
	{
		login[i]=inputLogin(*login);
		if (cheakLogin(login, i) == 0)
		{
			printf("로그인 성공\n");
		}
		else
		{
			printf("아이디나 패스워드가 맞지 않습니다.\n");
		}
	}

	return;
}

Login inputLogin(Login login)
{
	printf("ID? ");
	scanf("%s", login.id);

	printf("PW? ");
	scanf("%s", login.pw);

	return login;
}

int cheakLogin(Login *login, int index)
{
	for (int i = 0; i < MAXARR; i++)
	{
		if (strcmp(login[index].id, login[i].id) == 0 && strcmp(login[index].pw, login[i].pw) == 0)
		{
			return 0;
		}
	}

	return 1;
}