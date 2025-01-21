// C program to find size of doubly linked list.
#include <stdio.h>
#include <stdlib.h>

struct Node {
int data;
struct Node* prev;
struct Node* next;
};

void push(struct Node** head, int new_data)
{
struct Node* new_node
	= (struct Node*)malloc(sizeof(struct Node));
new_node->data = new_data;
new_node->next = *head;
new_node->prev = NULL;
if ((*head) != NULL) {
	(*head)->prev = new_node;
}
(*head) = new_node;
}

int findSize(struct Node* node)
{
int res = 0;
while (node != NULL) {
	res++;
	node = node->next;
}
return res;
}

int main()
{

// code
struct Node* head = NULL;
push(&head, 4);
push(&head, 3);
push(&head, 2);
push(&head, 1);
printf("%d", findSize(head));

return 0;
}

// This code is contributed by lokeshmvs21.

