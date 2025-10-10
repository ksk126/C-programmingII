/*
학번: 202511210
이름: 김수경
프로그램명: assignment11
날짜: 25.10.11
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
		{ "아메리카노", 4000, 5 },
		{ "카페라떼",   4500, 7 },
		{ "플랫화이트", 5000, 10 },
		{ "에스프레소", 2500, 3 },
		{ "아이스티",   2000, 8 }
	};

	char input[LEN];
	int qty, total;
	Product* p;

	while (1)
	{
		printf("주문할 제품명? ");
		scanf(" %s", input);

		if (strcmp(input, ".") == 0)
			break;

		p = findProduct(input, items, MAX);

		if (p == NULL)
		{
			printf("%s 제품이 존재하지 않습니다.\n\n", input);
			continue;
		}

		printf("주문 수량: ");
		scanf("%d", &qty);

		total = processOrder(p, qty);

		if (total == 0)
		{
			printf("재고가 부족합니다. (재고: %d개)\n\n", p->stock);
		}
		else
		{
			printf("결제 금액: %d원 / 제품명: %s / 재고: %d개\n\n", total, p->name, p->stock);
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
	printf("\n=== 최종 재고 ===\n");

	for (int i = 0; i < size; i++)
	{
		printf("[%s %d원 재고:%d개]\n", items[i].name, items[i].price, items[i].stock);
	}

	return;
}