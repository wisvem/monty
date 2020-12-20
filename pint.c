#include "monty.h"

void pint(stack_t **stack, unsigned int ln, char *inst, char *data)
{
	int number;
	stack_t *h = *stack;
	(void)stack;
	(void)number;
	(void)data;
	(void)ln;
	(void)inst;

	if (!stack)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", ln);
		exit(EXIT_FAILURE);
	}
	printf("%i\n", (*h).n);
}
