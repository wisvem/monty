#include "monty.h"

void pchar(stack_t **stack, unsigned int ln, char *inst, char *data)
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
		fprintf(stderr, "L%u: can't pchar, stack empty\n", ln);
		exit(EXIT_FAILURE);
	}
	if ((*h).n < 0 || (*h).n > 255)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", ln);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (*h).n);
}
