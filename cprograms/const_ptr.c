
#include <stdio.h>

void main()
{
	int a = 45;
	int x = 67;
	int *const p = &a;
	//p = &x;
	(*p)++;

}
