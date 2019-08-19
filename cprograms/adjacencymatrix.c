#include <stdlib.h>
#include <stdio.h>
#define max 10
int adj[max][max];
int n;
void display();
void insert();
void create_graph();
int main()
{
	while(1)
	{
		int origin,dest;
		printf("Enter 1 to create and 2 to display and 3 to exit\n");
		int choice;
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:create_graph();
			       break;
			case 2:display();
			       break;
			case 3:exit(0);
			       break;
	        }
	}
}

void create_graph()
{
	int origin,dest,max_edges,i;
	printf("Enter the number of nodes");
	scanf("%d",&n);
	max_edges=n*(n-1);
	for(i=1;i<=max_edges;i++)
	{
		printf("Enter the edge direction");
		scanf("%d%d",&origin,&dest);
		if(origin==0||dest==0)
			break;
		else if(origin>n || dest>n || origin<0 || dest <0 )
			printf("Invalid edge\n");
		else
			adj[origin][dest]=1;
	}
}


void display()
{
	
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d\t",adj[i][j]);
		}
		printf("\n");
	}
}



