#include <stdio.h>
#include <stdlib.h>
int top=-1,a[100],track[100],i,j,n,up=-1;
void pop()
{
    if(top<0)
        printf("The stack is empty\n");
    else
    {
        printf("%d\n",a[top--]);
        up--;
        return;
    }
}

void maximum_element()
{
    if(top>=0)
        printf("%d\n",track[top]);
    else
    {
        printf("The stack is empty\n");
    }
}

void push()
{
    int ele,temp;
    if(top==n-1)
        printf("The stack is full");
    else
    {
        printf("Enter the element to be inserted\n");
        scanf("%d",&ele);
        temp=a[top];
        top++;
        a[top]=ele;
    }

    if(up==-1)
        track[++up]=ele;

    else if(ele>track[up])
    {
        track[++up]=ele;
    }
    else
    {
        track[++up]=temp;
    }
}


int main()
{
    int choice;
    printf("Enter the number of elements in the stack");
    scanf("%d",&n);
    while(1)
    {
        printf("1 for push,2 for pop,3 for max,4 for exit");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            maximum_element();
            break;
        case 4:
            exit(0);
        }
    }

    return 0;
}
