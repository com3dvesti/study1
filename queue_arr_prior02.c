#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int pr;
    int dat;
} Node;

#define SZ 20
Node* arr[SZ];
int tail;
int items;

void init() {
    tail = 0;
    items = 0;
    for (int i = 0; i < SZ; ++i) {
        arr[i] = NULL;
    }
}

void ins(int pr, int dat) {
    Node *node = (Node*) malloc(sizeof(Node));
    node->pr = pr;
    node->dat = dat;
    if (items < SZ) {
        arr[tail++] = node;
        items++;
    } else {
        printf("%s \n", "Queue is full!");
    }
}

Node* rem() {
    if (items == 0) {
        printf("%s \n", "Queue is empty");
        return NULL;
    }
    int max = arr[0]->pr;
    int idx = 0;

    for (int i = 1; i < items; ++i) {
        if (arr[i]->pr > max) {
            max = arr[i]->pr;
            idx = i;
        }
    }
    Node *tmp = arr[idx];
    while (idx < items) {
        arr[idx] = arr[idx + 1];
        idx++;
    }
    items--;
    tail--;
    return tmp;
}

void printQueue(){
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


#define T char
#define SIZE 1000
#define true 1 == 1
#define false 1 != 1

typedef int boolean;
int cursor = -1;
T Stack[SIZE];

boolean pushStack(T data) {
    if (cursor < SIZE) {
        Stack[++cursor] = data;
        return true;
    } else {
        printf("%s \n", "Stack overflow");
        return false;
    }
}

T popStack() {
    if (cursor != -1) {
        return Stack[cursor--];
    } else {
        printf("%s \n", "Stack is empty");
        return -1;
    }
}

void decToBin(int a) {
    while (a >= 1) {
        pushStack(a % 2);
        a /= 2;
    }
}

int main() {


    init();
	ins(2, 10);
	ins(1, 20);
	ins(11, 30);
	ins(4, 40);
	ins(1, 50);
	ins(9, 60);
	ins(3, 70);
	ins(4, 80);
	ins(5, 90);
	ins(3, 100);
	printQueue();
	rem();
	rem();
	rem();
	printQueue();
    /*decToBin(22);
    int count = cursor;
    for (int i = 0; i <= count; ++i) {
        printf("%d", popStack());
    }*/
}