#include<stdio.h>
#include"Main.h"

int main(void)
{
	struct Stack a;
	for (int i = 0; i < 10; i++)
		a.push(&a, i);
	for (int i = 10; i > 0; i--)
		printf("stack[%d] - %d\n",i,  a.pop(&a));

	system("PAUSE");
	return EXIT_SUCCESS;

}