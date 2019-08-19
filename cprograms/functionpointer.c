#include <stdio.h>
void func(int a)
{
	printf("The value of a is %d",a);
}
int main()
{
	void (*funcptr)(int);
	funcptr=&func;
	(*funcptr)(10);
}
