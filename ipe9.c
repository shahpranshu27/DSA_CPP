#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void insertEnd(struct Node** head, int data){
    
    // since this will be the last node so it will point to NULL
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    // if Linked List is empty its is first node being entered
    if(*head == NULL){
        *head = newNode;
        return;
    }
    // otherwise find the current last node
    
    // create another variable to traverse the LL
    // *head should not be used as we do not want to change head
    struct Node* temp = *head;
    
    // traverse to the last node of Linked List
    while(temp->next!=NULL)
        temp = temp->next;
    
    // assign last node's next to this newNode
    temp->next = newNode;
    
    printf("%d inserted at the end\n", data);
}


void display(struct Node* node){

    // as linked list will end when Node is Null
    while(node!=NULL){
        printf("%d ",node->data);
        node = node->next;
    }
    printf("\n");
}

int main()
{
    //creating 4 pointers of type struct Node
    //So these can point to address of struct type variable
    struct Node* head = NULL; 
    struct Node* node2 = NULL; 
    struct Node* node3 = NULL; 
    struct Node* node4 = NULL;

    // allocate 3 nodes in the heap 
    head =  (struct Node*)malloc(sizeof(struct Node)); 
    node2 = (struct Node*)malloc(sizeof(struct Node)); 
    node3 = (struct Node*)malloc(sizeof(struct Node)); 
    node4 = (struct Node*)malloc(sizeof(struct Node));
   
    head->data  = 22; // data set for head node 
    head->next  = node2; // next pointer assigned to address of node2 

    node2->data = 30; 
    node2->next = node3; 

    node3->data = 24;
    node3->next = node4; 

    node4->data = 20;
    node4->next = NULL;

    /*No need for & i.e. address as we do not
    need to change head address
    */
    printf("Linked List Before Operations : "); 
    display(head);
    
    insertEnd(&head,5);
    insertEnd(&head,6);
    insertEnd(&head,7);
    insertEnd(&head,8);

    printf("Linked List After Operations : ");
    display(head);

    return 0; 
}
