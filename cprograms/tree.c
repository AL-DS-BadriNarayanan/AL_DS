#include <stdio.h>
#include <malloc.h>
struct node* newnode(int);
struct node* insert(struct node*,int);
void inorder(struct node*);

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node* newnode(int key)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=key;
	node->left=NULL;
	node->right=NULL;
	return node;
}

struct node* insert(struct node* root,int key)
{
	if(root==NULL)
		return newnode(key);

	 if(root->data<key)
		root->right=insert(root->right,key);
	
	else if(root->data>key)
		root->left=insert(root->left,key);
	return root;
}

void inorder(struct node* root)
{
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}

void preorder(struct node* root)
{
	if(root!=NULL)
	{
		printf("%d\t",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}


int main()
{
	struct node *root=NULL;
	root=insert(root,80);
	insert(root,60);
	insert(root,90);
	insert(root,100);
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");

}
