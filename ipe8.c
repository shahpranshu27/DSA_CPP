#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};


void insertBeginning(struct Node** head, int data){
    
    // dynamically create memory for this newNode
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    
    // assign data value
    newNode->data = data;
    // change the next node of this newNode 
    // to current head of Linked List
    newNode->next = *head;

    //re-assign head to this newNode
    *head = newNode;
    printf("%d Insertion Successful\n",newNode->data);
}

void printLinkedList(struct Node* node)
{
    printf("\nLinked List: ");
    
    // as linked list will end when Node is Null
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    
    printf("\n");
}

int main()
{
    struct Node* head = NULL;

    // Use '&' i.e. address as we need to change head address
    insertBeginning(&head,100);
    insertBeginning(&head,80);
    insertBeginning(&head,60);
    insertBeginning(&head,40);
    insertBeginning(&head,20);
    
    // Don't use '&' as not changing head in printLinkedList operation
    printLinkedList(head);
    
    
    return 0; 
}
