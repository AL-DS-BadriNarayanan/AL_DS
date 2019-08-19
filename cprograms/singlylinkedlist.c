
#include <stdio.h>
#include <malloc.h>

struct node
{
	int data;
	struct node *next;
};

struct node* root=NULL;

void add_front(int key)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=key;
	temp->next=root;
	root=temp;
}

void add_node(int key)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node *traceptr = root;
	temp->next=NULL;
	temp->data=key;
	if(root==NULL)
	{
		root=temp;
		root->next=NULL;
	}
	else
	{
		while(traceptr->next != NULL)
			traceptr=traceptr->next;
		traceptr->next=temp;
	}
}


void display()
{
	while(root!=NULL)
	{
		printf("%d\t",root->data);
		root=root->next;
	}
}


void main()
{
 	
	add_node(15);
	add_node(20);
	add_node(50);
	add_front(10);
	display();
	printf("\n");
}	
