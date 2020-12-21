#include "monty.h"

/**
* pint - print the head
* @stack: teh stack
* @ln: line number
**/
void pint(stack_t **stack, unsigned int ln)
{
	int number;
	stack_t *h = *stack;
	(void)stack;
	(void)number;
	(void)ln;

	if (!h)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", ln);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*h).n);
}
