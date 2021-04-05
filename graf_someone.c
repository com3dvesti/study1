#include <stdio.h>
#include <stdlib.h>

const int n = 6;
int matrix[n][n] = {
	{0, 1, 1, 0, 0, 0},
	{0, 0, 0, 1, 1, 1},
	{0, 0, 0, 0, 0, 1},
	{1, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 1, 0},
};

typedef struct Node
{
	int dat;
	struct Node* parent;
} Node;

typedef struct List
{
	Node* head;
	int size;
} List;

void ins(List *lst, int dat)
{
	Node* new = (Node*) malloc(sizeof(Node));
	new->dat = dat;
	new->parent = lst->head;
	lst->head = new;
	lst->size++;
}

int check (List *lst, int dat)
{
	int x;
	int i = 0;
	do
	{
		i++;
		x = lst->head->dat;
		if (lst->head - i == NULL)
			return 1;
	}while(x != dat);
	if (x == dat)
		return 0;
	return 1;
}

void depthTravers (int st)
{
	List* lst = (List*) malloc(sizeof(List));
	Node* new = (Node*) malloc(sizeof(Node));
	new->dat = st;
	new->parent = NULL;
	lst->head = new;
	lst->size = 1;
	for (int i = 0; i < n; i++)
		if (matrix[st][i] == 1 && check(lst, i) == 1)
			ins(lst, i);
	while (lst->head != NULL)
	{
		printf ("%d ", lst->head);
		lst->head = lst->head->parent;
	}
}

int main (int argc, char** argv)
{
	depthTravers(0);
	printf("\n");
}