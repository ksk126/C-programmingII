/*
�й�: 202511210
�̸�: �����
���α׷���: assignment03
��¥: 25.10.01
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
int cheakLogin(Login *login, Login* loginCheak, int index);

int main()
{
	assignment03();

	return 0;
}

void assignment03()
{
	Login loginCheak[MAXARR] = { 0 };
	Login login[MAXARR] = {
		{ "guest", "idontknow" }
	};

	for (int i = 0; i < MAXARR; i++)
	{
		loginCheak[i]=inputLogin(*loginCheak);
		if (cheakLogin(login, loginCheak, i) == 0)
		{
			printf("�α��� ����\n");
		}
		else
		{
			printf("���̵� �н����尡 ���� �ʽ��ϴ�.\n");
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

int cheakLogin(Login *login, Login *loginCheak, int index)
{
	for (int i = 0; i < MAXARR; i++)
	{
		if (strcmp(loginCheak[index].id, login[i].id) == 0 && strcmp(loginCheak[index].pw, login[i].pw) == 0)
		{
			return 0;
		}
	}

	return 1;
}