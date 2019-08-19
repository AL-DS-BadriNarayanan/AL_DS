#include <stdio.h>
void f(int *,int *);
int main()
{
	int i,j;
	i=20,j=30;
	f(&i,&j);
	printf("%d\n%d\n",i,j);
}

void f(int *i,int *j)
{
	*i=*i+*i;
	*j=*j+*j;
}
