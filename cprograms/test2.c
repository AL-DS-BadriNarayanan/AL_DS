#include <stdio.h>
int func(int a,int b);
int main()
{
	int i=3,j=5;
	int k=func(i,j);
	printf("%d",k);
}

int func(int a,int b)
{
	int g=a+b;
	int k=a*b;
	return(g,k);
}
