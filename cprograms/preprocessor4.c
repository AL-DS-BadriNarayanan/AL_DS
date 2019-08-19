#include <stdio.h>
#define PRINT(int) printf(#int "=%d\n",int)
int main()
{
	int a=10;
	PRINT(a);
	return 0;
}
