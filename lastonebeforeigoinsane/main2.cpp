#include "Utils.h"
#include "Stack.h"
#include <stdio.h>
#define NUM 10
int main()
{
    //create vars
    int array[NUM] = { 0 };
    int input = 0;
    Stack* myStack = new Stack;
    //check isempty
    if (isEmpty(myStack))
    {
        printf("empty as should be");
    }
    //fill array
    for (int i = 0; i < NUM; i++)
    {
        scanf_s("%d", &(array[i]));
    }
    //check reverse(uses most stack functions)
    reverse(array, NUM);
    for (int i = 0; i < NUM; i++)
    {
        printf("%d", (array[i]));
    }
    //clean stack
    cleanStack(myStack);
    return 0;   
}