#include <stdio.h>
#include <stdlib.h>
#define SZ 10

typedef struct
{
	int pr;
	int dat;
}Node;

Node* arr[SZ];
int items;
int flag;

void init()
{
	for (int i = 0; i < SZ; i++)
		arr[i] = 0;
	items = 0;
	flag = SZ - 1;
}

void ins(int pr, int dat)
{
	if (items == SZ)
		printf("Queue is full\n");
	else
	{
		for (int i = flag + SZ; i > flag; i--)
		{
			if (arr[i % SZ] == 0)
			{
				flag = i % SZ;
				break;
			}
		}
		Node* node = (Node*)malloc(sizeof(Node));
		node->pr = pr;
		node->dat = dat;
		arr[flag] = node;
		items++;
	}
}

Node* rem()
{
	if (items == 0)
		return 0;
	else
	{
		int min = 2147483647;
		for (int i = 0; i < SZ; i++)
			if (arr[i] != 0)
				if (min > arr[i]->pr)
					min = arr[i]->pr;
		for (int i = flag + SZ; i > flag; i--)
			if (arr[i] != 0)
				if (min == arr[i % SZ]->pr)
				{
					Node* tmp = arr[i % SZ];
					arr[i % SZ] = 0;
					items--;
					break;
				}
	}
}

void printQueue()
{
	printf("[ ");
	for (int i = 0; i < SZ; i++)
	{
		if (arr[i] == 0)
			printf("[*, *] ");
		else
			printf("[%d, %d] ", arr[i]->pr, arr[i]->dat);
	}
	printf(" ]\n");
}

const int LEN = 32;
unsigned dec;

void dec2bin(char* bin, int* cursor)
{
	*cursor = *cursor - 1;
	bin[*cursor] = dec % 2;
	dec /= 2;
	if (*cursor != 0)
		dec2bin(bin, cursor);
}

int main(int argc, const char** argv)
{
	init();
	ins(2, 10);
	ins(1, 20);
	ins(3, 30);
	ins(4, 40);
	ins(1, 50);
	ins(6, 60);
	ins(3, 70);
	ins(4, 80);
	ins(5, 90);
	ins(3, 100);
	printQueue();
	rem();
	rem();
	rem();
	printQueue();
	ins(5, 15);
	ins(6, 13);
	ins(3, 14);
	ins(7, 23);
	printQueue();
	char bin[LEN];
	int cursor = LEN;
	printf("dec = ");
	scanf("%d", &dec);
	dec2bin(bin, &cursor);
	for (int i = 0; i < LEN; i++)
		printf("%d", bin[i]);
	return 0;
}