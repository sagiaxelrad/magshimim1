#include "Queue.h"
#include <stdlib.h>
/*create queue
input: queue, size
output:none
*/
void initQueue(Queue* q, unsigned int size)
{
	q->maxSize = size;
	q->size = 0;
	q->arr = (unsigned int*)malloc(1 * sizeof(unsigned int));
}
/*clean queue
input: queue
output:none
*/
void cleanQueue(Queue* q)
{
	delete[] q->arr;
	q->size = 0;
	q->maxSize = 0;
}
/*add to queue
input: queue, value
output:none
*/
void enqueue(Queue* q, unsigned int newValue)
{
	//make sure there is room
	if (!isFull(q))
	{
		int i = q->size;
		q->size++;
		//elongate array
		q->arr = (unsigned int*)realloc(q->arr, q->size * sizeof(unsigned int));
		//add value to start
		while (i > 0)
		{
			q->arr[i] = q->arr[i - 1];
			i--;
		}
		q->arr[0] = newValue;
	}
}
/*remove from queue
input: queue
output:item removed
*/
int dequeue(Queue* q)
{
	//make sure there are values
	if (q->size > 0)
	{
		unsigned int value = q->arr[q->size - 1];
		q->size--;
		//shorten array
		q->arr = (unsigned int*)realloc(q->arr, q->size * sizeof(unsigned int));
		return value;
	}
	else
	{
		return -1;
	}
}
/*chek if queue is empty
input: queue
output:is empty?
*/
bool isEmpty(Queue* s)
{
	return s->size == 0;
}
/*chek if queue is full
input: queue
output:is full?
*/
bool isFull(Queue* s)
{
	return s->size == s->maxSize;
}






