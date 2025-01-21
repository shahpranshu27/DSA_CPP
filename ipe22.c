#include<stdio.h>  
#include<stdlib.h> 

struct node      //structure of node 
{
  int data;
  struct node *nextpt;
} *headpt;

void delete_node_at_specific (int value)	//function to delete any node from the list
{
  struct node *u, *v;
  int delete, w = 0;
  delete = value - 1;
  u = headpt;
  while (w != delete)
    {
      v = u;
      u = u->nextpt;
      w++;
    }
  v->nextpt = u->nextpt;
  free (u);			//free node
}

void list (int n)			// list creation function of circular linked list
{
  int l, data;
  struct node *prevpt, *new_node;

  if (n >= 1)
    {
      headpt = (struct node *) malloc (sizeof (struct node));

      printf ("Enter data for node 1 : ");
      scanf ("%d", &data);
      headpt->data = data;
      headpt->nextpt = NULL;
      prevpt = headpt;
      for (l = 2; l <= n; l++)
	{
	  new_node = (struct node *) malloc (sizeof (struct node));
	  printf ("Enter data for node %d : ", l);
	  scanf ("%d", &data);
	  new_node->data = data;
	  new_node->nextpt = NULL;
	  prevpt->nextpt = new_node;
	  prevpt = new_node;
	}
      prevpt->nextpt = headpt;
    }
}

void print (int m)			// print function of circular linked list
{
  struct node *extra;
  int n = 1;

  if (headpt == NULL)
    {
      printf ("The List is empty");
    }
  else
    {
      extra = headpt;
      if (m == 1)
	{
	  printf ("The circular linked list is :\n");
	}
      else
	{
	  printf ("After that the circular linked list is :\n");
	}
      do
	{
	  printf ("The data at node %d is %d\n", n, extra->data);
	  extra = extra->nextpt;
	  n++;
	}
      while (extra != headpt);
    }
}

int main ()
{
  int value, n, x;
  printf ("Enter the size of nodes : ");
  scanf ("%d", &n);
  list (n);
  print (x);
  printf ("Enter position from where you want to delete the node : ");
  scanf ("%d", &value);
  delete_node_at_specific (value);
  print (x);
  return 0;
}
