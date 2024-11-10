#pragma once
typedef struct LinkedList
{
	int value;
	LinkedList* next;
}LinkedList;
void add(LinkedList** head, int value);
int remove(LinkedList** head);
void clean(LinkedList** head);