#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}

int multiply(int a,int b)
{
    return a*b;
}

int divide(int a,int b)
{
    return a/b;
}

int main()
{
    int (*funcptr[])(int,int)= {add,multiply,divide};
    int result=(*funcptr[1])(5,7);
    printf("%d",result);
}
