
#include <stdio.h>

float funcone(int x)
{
	float f = 90.35;
	printf("This is a sample function one %d \n",x);
	return f;
}

int functwo(float(* localfptr)(int))
{
	float p;
	int g = 4;
	p = (* localfptr)(g);
	printf("This is a another sample function two \n");
	printf("This is the return value from function one %f \n",p);
}


int main()
{
	int s;
	float (* fptr)(int);
	fptr = funcone;
	s = functwo(funcone);
	//s = functwo(fptr);
	printf("This is the variaable that has been returned %d \n",s);
	return 0;
}
