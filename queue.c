#include<stdio.h>
#include<stdlib.h>
int queue_array[100],size;
int rear,fromt = -1,-1;
void enqueue();
void dequeue();
void display();
void main()
{
	printf("enter size of array : ");
	scanf("%d",size);
	int choice;
	printf("enter choice : ");
	scanf("%d",&choice);
	printf("\n 1.Insert \n 2.Delete \n 3.Display \n 4.Exit ");
	switch(choice)
	{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			break;
	}
	void enqueue()
	{
		int add_item;
		if(rear==size-1)
		{
			
		}
		printf("")
	}
}
