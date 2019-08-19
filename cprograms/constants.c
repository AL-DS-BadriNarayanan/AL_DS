#include <stdio.h>
int main()
{
 	int a=56;
	int x=70;
	int *const p=&a;
	*p=100;
	p=&x;
	
}
