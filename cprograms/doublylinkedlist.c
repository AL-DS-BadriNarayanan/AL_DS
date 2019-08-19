#include<stdlib.h>
#include<stdio.h>
#include<malloc.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
};

struct node *head=NULL;

void insert_first(int key)
{
	struct node *traceptr=head;
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	
	newnode->next=head;
	head=newnode;
	head->data=key;
}
int count_nodes()
{
	int count=0;
	struct node *traceptr=head;
	while(traceptr!=NULL)
	{
		count++;
		traceptr=traceptr->next;
	}

	return count;
}
void create(int key)
{
  struct node *prevptr=NULL;
  struct node *traceptr = head;
  struct node* newnode=(struct node*)malloc(sizeof(struct node));
  newnode->data=key;
  if(head==NULL)
  {
	  head=newnode;
          newnode->next=NULL;
	  newnode->prev=NULL;
  }
  else
  {
	  while(traceptr->next !=NULL)
	  {
		  prevptr=traceptr;
		  traceptr = traceptr -> next;
	  }
  traceptr->next=newnode;
  newnode->next=NULL;
  newnode->prev=prevptr;
  }
}

void add_node(int position)
{
	int count=0;
	struct node *tempptr=head;
	while(tempptr!=NULL)
	{
		struct node *newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=25;
		newnode->prev=tempptr;
		newnode->next=tempptr->next;
		tempptr->next=newnode;
		break;
	}
}

void printelements()
{
	struct node* current=head;
	struct node* previouspointer=NULL;
	while(current!=NULL)
	{
		printf("%d\n",current->data);
		previouspointer=current;
		current=current->next;
	}
	printf("The value in the last node is %d\n",previouspointer->data);
}

int main()
{
	create(20);
	create(30);
	create(70);
	create(100);
	create(1000);
	insert_first(10);
	insert_first(0);
	add_node(25);
	printelements();
	printf("The number of nodes in the list is %d\n",count_nodes());
	printf("\n");
}

