#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

typedef struct Node Node;

typedef struct List
{
	Node* head;
} List;

void printList(Node* n)
{
	if (n == NULL)
	{
		printf("EMPTY\n");
		return;
	}
	if (n->next == NULL)
	{
		printf("%d --> NULL\n", n->data);
	}
	else
	{
		while (n != NULL)
		{
			printf("%d --> ", n->data);
			n = n->next;
		}
		printf("NULL\n");
	}
}

void append(List* list, int data)
{
	if (data <= 500)
	{
		Node* newNode = (Node*)malloc(sizeof(Node));
		newNode->data = data;
		newNode->next = NULL;
		Node* tmp = list->head;
		if (tmp != NULL)
		{
			while (tmp->next != NULL)
			{
				tmp = tmp->next;
			}
			tmp->next = newNode;
		}
		else
		{
			list->head = newNode;
		}
	}
}

void delete(List* list, int data)
{
	if (data <= 500)
	{
		Node* tmp = list->head;
		if (tmp == NULL)
			return;
		if (tmp->next == NULL)
		{
			free(tmp);
			list->head = NULL;
		}
		else
		{
			Node* prev;
			do
			{
				if (tmp->data == data)
					break;
				prev = tmp;
				tmp = tmp->next;
			} while (tmp != NULL);
			prev->next = tmp->next;
			free(tmp);
		}
	}
}

int main() {
	printf("Nama: Muhammad Yaasiin Hidayatulloh\n");
	printf("NIM: 32602200107 \n\n");
	List list;
	list.head = NULL;
	append(&list, 100);
	printList(list.head);
	append(&list, 200);
	printList(list.head);
	append(&list, 300);
	printList(list.head);
	append(&list, 400);
	printList(list.head);
	append(&list, 500);
	printList(list.head);
	printList(list.head);
	printList(list.head);

}