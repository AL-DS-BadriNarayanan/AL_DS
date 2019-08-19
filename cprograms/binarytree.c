
#include <stdlib.h>
#include <stdio.h>

struct node
{
  int data;
  struct node *left,*right;
};

struct node* createnode(int data)
{
	struct node *newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
}

struct node* insert_node(struct node* node,int key)
{
	if(node==NULL)
		return createnode(key);
	if(key<node->data)
		node->left=insert_node(node->left,key);
	else if(key>node->data)
		node->right=insert_node(node->right,key);

	return node;
}

void inorder(struct node *root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\n",root->data);
		inorder(root->right);
	}
	
}

struct node* delete_node(struct node *node,int key)
{
	struct node *root=node;
	if(key<root->data)
		root->left=delete_node(root->left,key);
	else if(key>root->data)
		root->right=delete_node(root->right,key);

	else
	{
		if(root->left==NULL)
		{
			struct node *temp=root->right;
			free(root);
			return temp;
	 	}
		
		else if(root->right==NULL)
		{
			struct node *temp=root->left;
			free(root);
			return temp;
		}
	}
}






int main()
{
	struct node* root=NULL;
	root=insert_node(root,50);
	insert_node(root,60);
	insert_node(root,40);
	insert_node(root,55);
	insert_node(root,70);
	insert_node(root,80);
	insert_node(root,30);
	insert_node(root,45);
	inorder(root);
	printf("\n");
	root=delete_node(root,60);
	inorder(root);
	printf("\n");
	return 0;
}


