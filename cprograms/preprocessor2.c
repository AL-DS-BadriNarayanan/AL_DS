#include <stdio.h>
#define SQR(x) (x*x)
int main()
{
	int a,b;
	a=10,b=12;
	int c=SQR(a+2);
	printf("%d\n",c);
	return 0;
}
