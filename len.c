#include "monty.h"
/**
 * s_len - Entry point
* @h: head of the list
* Return: the number of elements in a linked list
**/
int s_len(stack_t *stack)
{
	stack_t *h = stack;
	int count = 0;

	while (h != NULL)
	{
		h = (*h).next;
		count++;
	}
	return (count);
}