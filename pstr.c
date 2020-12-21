#include "monty.h"

/**
* pstr - print the head
* @stack: teh stack
* @ln: line number
**/
void pstr(stack_t **stack, unsigned int ln)
{
	int number;
	stack_t *h = *stack;
	(void)stack;
	(void)number;
	(void)ln;

	if (!*stack)
	{
		return;
	}
	while (h != NULL)
	{
		if ((*h).n < 0 || (*h).n > 127)
		{
			putchar('\n');
			return;
		}
		printf("%c", (*h).n);
		h = (*h).next;
	}
	putchar('\n');
}
