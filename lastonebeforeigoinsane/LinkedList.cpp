#include "LinkedList.h"
#include <stdio.h>
/*
add node to list
input: list, value
output:none
*/
void add(LinkedList** head, int value)
{
	//create new node
	LinkedList* temp = new LinkedList;
	temp->value = value;
	temp->next = *head;
	//add node
	*head = temp;

}
/*
remove node from list
input: list
output:node value
*/
int remove(LinkedList** head)
{
	LinkedList* temp = *head;
	//remove node
	*head = (*head)->next;
	int value = temp->value;
	delete temp;
	return value;
}
/*
free list memory
input: list
output:none
*/
void clean(LinkedList** head)
{
	//make sure head isn't null
    if (head == NULL || *head == NULL) {
        return;
    }
    LinkedList* temp;
    while ((*head) != (LinkedList*)0xCDCDCDCDCDCDCDCD && (*head) != nullptr) //conditions to avoid annoying errors
	{
		//remove node
        temp = *head;  
        *head = (*head)->next;
        delete temp;
    }
}