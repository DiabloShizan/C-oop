#pragma once
#include<stdlib.h>

struct Stack
{
	unsigned int MAX_SIZE;
	int i;
	int *stack;

	int(*pop) (struct Stack*);
	void(*push) (struct Stack*, int);

};

int pop(struct Stack* self)
{
	if (self->i == 0) {
		fprintf(stderr, "\nEND OF STACK\n");
		return -1;
		
	}
	return self->stack[self->i--];
}
void push(struct Stack* self, int num)
{
	if (self->i == self->MAX_SIZE) {
		fprintf(stderr, "\nEND OF STACK\n");
		return ;
	}
	self->stack[++self->i] = num;
}

void Init(struct Stack *self, int size)
{
	
	self->i = 0;
	self->MAX_SIZE = size;
	self->stack = (int*) calloc(size, sizeof(int));
	self->pop = pop;
	self->push = push;
}