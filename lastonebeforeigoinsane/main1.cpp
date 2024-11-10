#include "Queue.h"
#include <stdio.h>
#define NUM 10
int main()
{
    //variables
    unsigned int input = 0;
    Queue* myQueue = new Queue;
    initQueue(myQueue, NUM);
    //add values to queue
    for(int i=0;i<NUM;i++)
    {
        scanf_s("%d", &input);
        enqueue(myQueue,input);
    }
    //check isfull
    if (isFull(myQueue))
    {
        printf("full as it should be");
    }
    //print queue content
    for (int i = 0; i < NUM; i++)
    {
        printf("%d", dequeue(myQueue));
    }
    //check isempty
    if (isEmpty(myQueue))
    {
        printf("empty as it should be");
    }
    //clean queue
    cleanQueue(myQueue);
    return 0;
}