#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void deleteEnd(struct Node** head){
    struct Node* temp = *head;
    struct Node* previous;
    
    // if there are no nodes in Linked List can't delete
    if(*head == NULL){
        printf("Linked List Empty, nothing to delete");
        return;
    }
    
    // if Linked List has only 1 node
    if(temp->next == NULL){
        printf("%d deleted\n",(*head)->data);
        *head = NULL;
        return;
    }
    
    // else traverse to the last node
    while (temp->next != NULL) 
    {
        // store previous link node as we need to change its next val
        previous = temp; 
        temp = temp->next; 
    }
    // Curr assign 2nd last node's next to Null
    previous->next = NULL;
    // delete the last node
    printf("%d deleted\n", temp->data);
    free(temp);
    // 2nd last now becomes the last node
}

void display(struct Node* node){

    // as linked list will end when Node is Null
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n\n");
}

int main()
{
    //creating 4 pointers of type struct Node
    //So these can point to address of struct type variable
    struct Node* head = NULL; 
    struct Node* node2 = NULL; 
    struct Node* node3 = NULL; 
    struct Node* node4 = NULL;
    struct Node* node5 = NULL;
    struct Node* node6 = NULL;

    // allocate 3 nodes in the heap 
    head =  (struct Node*)malloc(sizeof(struct Node)); 
    node2 = (struct Node*)malloc(sizeof(struct Node)); 
    node3 = (struct Node*)malloc(sizeof(struct Node)); 
    node4 = (struct Node*)malloc(sizeof(struct Node));
    node5 = (struct Node*)malloc(sizeof(struct Node));
    node6 = (struct Node*)malloc(sizeof(struct Node));

   
    head->data = 2; // data set for head node 
    head->next = node2; // next pointer assigned to address of node2 

    node2->data = 4; 
    node2->next = node3; 

    node3->data = 6;
    node3->next = node4; 

    node4->data = 8;
    node4->next = node5;
    
    node5->data = 10;
    node5->next = node6;
    
    node6->data = 12;
    node6->next = NULL;
   
    printf("Linked list: ");
    display(head);
    
    deleteEnd(&head);
    deleteEnd(&head);
    
    printf("\nLinked list: ");
    display(head);
    
    return 0; 
}
