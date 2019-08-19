#include <stdio.h>
#define CUBE(x) (x*x*x)
int main()
{
	int a=4;
	int b=CUBE(a++);
	printf("%d\n%d\n",a,b);
	return 0;
}
