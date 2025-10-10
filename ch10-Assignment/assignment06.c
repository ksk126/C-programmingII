/*
�й�: 202511210
�̸�: �����
���α׷���: assignment11
��¥: 25.10.11
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 5
#define LEN 50

typedef struct {
	char name[LEN];
	int price;
	int stock;
} Product;

void assignment11();
Product* findProduct(char* name, Product items[], int size);
int processOrder(Product* p, int quantity);
void printFinalStocks(Product items[], int size);

int main()
{
	assignment11();

	return 0;
}

void assignment11()
{
	Product items[MAX] = {
		{ "�Ƹ޸�ī��", 4000, 5 },
		{ "ī���",   4500, 7 },
		{ "�÷�ȭ��Ʈ", 5000, 10 },
		{ "����������", 2500, 3 },
		{ "���̽�Ƽ",   2000, 8 }
	};

	char input[LEN];
	int qty, total;
	Product* p;

	while (1)
	{
		printf("�ֹ��� ��ǰ��? ");
		scanf(" %s", input);

		if (strcmp(input, ".") == 0)
			break;

		p = findProduct(input, items, MAX);

		if (p == NULL)
		{
			printf("%s ��ǰ�� �������� �ʽ��ϴ�.\n\n", input);
			continue;
		}

		printf("�ֹ� ����: ");
		scanf("%d", &qty);

		total = processOrder(p, qty);

		if (total == 0)
		{
			printf("��� �����մϴ�. (���: %d��)\n\n", p->stock);
		}
		else
		{
			printf("���� �ݾ�: %d�� / ��ǰ��: %s / ���: %d��\n\n", total, p->name, p->stock);
		}
	}

	printFinalStocks(items, MAX);

	return;
}

Product* findProduct(char* name, Product items[], int size)
{
	for (int i = 0; i < size; i++)
	{
		if (strcmp(items[i].name, name) == 0)
			return &items[i];
	}

	return NULL;
}

int processOrder(Product* p, int quantity)
{
	if (quantity <= 0 || p->stock < quantity)
		return 0;

	p->stock -= quantity;

	return quantity * p->price;
}

void printFinalStocks(Product items[], int size)
{
	printf("\n=== ���� ��� ===\n");

	for (int i = 0; i < size; i++)
	{
		printf("[%s %d�� ���:%d��]\n", items[i].name, items[i].price, items[i].stock);
	}

	return;
}