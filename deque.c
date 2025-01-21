# include<stdio.h>
# define MAX 5
int deque_arr[MAX];
int F = -1;
int R = -1;
void insert_rear()
{
int added_item;
if((F == 0 && R == MAX-1) || (F == R+1))
{ printf("Queue Overflow\n");
return;}
if (R == -1) /* if queue is initially empty */
{ F = 0;
R = 0;}
else
if(R == MAX-1) /*right is at last position of queue */
R = 0;
else
R = R+1;
printf("Input the element for adding in queue : ");
scanf("%d", &added_item);
deque_arr[R] = added_item ;
}
/*End of insert_rear*/

/*Begin of insert_front*/
void insert_front()
{
int added_item;
if((F == 0 && R == MAX-1) || (F == R+1))
{ printf("Queue Overflow \n");
return; }
if (F == -1)/*If queue is initially empty*/

{ F = 0;
R = 0; }
else
if(F== 0)
F=MAX-1;
else
F=F-1;
printf("Input the element for adding in queue : ");
scanf("%d", &added_item);
deque_arr[F] = added_item ; }
/*End of insert_front*/
void delete_front()
{
if (F == -1)
{ printf("Queue Underflow\n");
return ; }
printf("Element deleted from queue is : %d\n",deque_arr[F]);
if(F == R) /*Queue has only one element */
{ F = -1;
R=-1; }
else
if(F == MAX-1)
F = 0;
else
F = F+1;

}
/*End of delete_front*/
/*Begin of delete_rear*/
void delete_rear()
{
if (F == -1)
{printf("Queue Underflow\n");
return ; }
printf("Element deleted from queue is : %d\n",deque_arr[R]);
if(F == R) /*queue has only one element*/
{ F = -1;
R=-1; }
else

if(R == 0)
R=MAX-1;
else
R=R-1; }

/*End of delete_rear*/
void display_queue()
{
int i=F;
printf("\nElements in a deque are: ");
while (i!=R)
{
printf("%d ",deque_arr[i]);
i=(i+1) %MAX;
}
printf("%d\n",deque_arr[R]);

}
/*End of display_queue*/

/*Begin of main*/
int main ()
{ int choice;
do
{printf("1.insert at right\n");
printf("2.insert at left\n");
printf("3.delete at right\n");
printf("4.delete at left\n");
printf("5.Display\n");
printf("6.Quit\n");
printf("Enter your choice : ");
scanf("%d",&choice);
switch(choice)
{case 1 :
insert_rear();
break;
case 2 :
insert_front();

break;
case 3:
delete_rear();
break;
case 4:
delete_front();
break;

case 5:
display_queue();
break;

case 6:

break;

default:
printf("Wrong choice\n");
}
}
while(choice!=6);
}
