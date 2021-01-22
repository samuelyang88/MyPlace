#include <stdio.h>

int func(void);
int main()
{
	printf("Hello,world!\n");
	func();
	return 0;
}

int func(void)
{
	printf("goodbye,world!\n");
	return 0;
}