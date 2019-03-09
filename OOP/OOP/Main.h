#pragma once
#include<stdlib.h>

struct Stack
{
	int i;
	int *stack;

	int(*pop) (struct Stack*);
	void(*push) (struct Stack*, int);

};

int pop(struct Stack* self)
{

	return self->stack[self->i--];
}
void push(struct Stack* self, int num)
{
	self->stack[++self->i] = num;
}

void Init(struct Stack *self, int size)
{
	self->i = 0;
	self->stack = (int*) calloc(size, sizeof(int));
	self->pop = pop;
	self->push = push;
}