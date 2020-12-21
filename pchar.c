#include "monty.h"

/**
* pchar - print ascii
* @stack: teh stack
* @ln: line number
**/
void pchar(stack_t **stack, unsigned int ln)
{
	int number;
	stack_t *h = *stack;
	(void)stack;
	(void)number;
	(void)ln;


	if (!stack)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", ln);
		free_pizza();
	}
	if ((*h).n < 0 || (*h).n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", ln);
		free_pizza();
	}
	printf("%c\n", (*h).n);
}