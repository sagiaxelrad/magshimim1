#include "Stack.h"
/*
add item to stack
input: stack, value
output:none*/
void push(Stack* s, unsigned int element)
{
	add(&(s->data), element);
	s->size++;
}
/*
remove item from stack
input: stack, 
output:item*/
int pop(Stack* s)
{
	if (s->size > 0)
	{
		s->size--;
		return remove(&(s->data));
	}
	else
	{
		return -1;
	}
}
/*create stack
input: stack
output:none*/
void initStack(Stack* s)
{
	s->size = 0;
	s->data = new LinkedList;
	s->data->next = nullptr;
}
/*clean stack
input: stack
output:none*/
void cleanStack(Stack* s)
{
	s->size = 0;
	clean(&(s->data));
	delete s;
}
/*check is empty
input: stack
output:is empty?*/
bool isEmpty(Stack* s)
{
	return s->size == 0;
}
