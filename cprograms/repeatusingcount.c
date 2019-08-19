#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[6]={4,5,6,4,10,11};
	int i;
	int n=sizeof(a)/(sizeof(a[0]));
	int *count=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		if(count[a[i]]==1)
			printf("%d\n",a[i]);
		else
			count[a[i]]++;
	}
	return 0;
}
