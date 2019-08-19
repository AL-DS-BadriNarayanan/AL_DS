#include <stdio.h>
void printelements(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			
			if(a[i]==a[j])
				printf("%d",a[i]);
			
		}
	}

}

int main()
{
	int a[6]={4,5,5,10,12,14};
	int n=sizeof(a)/(sizeof(a[0]));
	printelements(a,n);
	printf("\n");
	return 0;
}

