#include<stdio.h>
#include"Main.h"

#define STACK(a, b) struct Stack a; Init(&a, b)

int main(void)
{
	STACK(a, 10);
	for (int i = 0; i < 10; i++)
		a.push(&a, i);
	for (int i = 10; i > 0; i--)
		printf("stack[%d] - %d\n",i,  a.pop(&a));

	system("PAUSE");
	return EXIT_SUCCESS;

}