#include "Utils.h"
#include "Stack.h"
#include <iostream>
using namespace std;

#define NUM 10
/*
reverse array using stack
input:array, size
output:none*/
void reverse(int* nums, unsigned int size)
{
	Stack* mystack = new Stack;
	initStack(mystack);
	unsigned int i = 0;
	//push all nums into stack
	for (i = 0; i < size; i++)
	{
		push(mystack, nums[i]);
	}
	//push all nums outta stack
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(mystack);
	}
	cleanStack(mystack);
}
/*
get 10 nums from user and return them in reverse
input:none
output:reversed numbers
*/
int* reverse10()
{
	int* arr = new int[NUM];
	int i = 0;
	//get input
	for (i = 0; i < NUM; i++)
	{
		arr[i] = (int)cin.get();
	}
	reverse(arr, NUM);
	return arr;
}