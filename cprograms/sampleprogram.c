#include <stdio.h>
struct employee
{
	char name[12];
	int age;
};

void f(struct employee);


int main()
{
	struct employee e={"Badri"};
	f(e);
	printf("\n");
	return 0;
}

void f(struct employee ee)
{
	printf("%s\t%d",ee.name,ee.age);

}
