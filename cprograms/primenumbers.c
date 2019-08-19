#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,flag=0,num;
	printf("Enter a number to check for prime");
	scanf("%d",&n);
	num=sqrt(n);
	for(i=2;i<num;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}

	if(flag==0)
		printf("It is a prime number\n");
        else
		printf("It is not a prime number\n");
}
	
			


