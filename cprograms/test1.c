#include <stdio.h>
void count(int);
int main()
{
	int number;
	number=10;
	count(number);
	return 0;
}

void count(int num)
{
	if(num<1)
		printf("%d",num);
	else
	{
		printf("%d\n",num);
		count(--num);
	}
}

