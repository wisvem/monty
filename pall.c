#include "monty.h"

void pall(stack_t **stack, unsigned int ln, char *inst, char *data)
{
	int number;
	stack_t *h = *stack;
	size_t count = 0;
	(void)stack;
	(void)number;
	(void)data;
	(void)ln;
	(void)inst;

	while (h != NULL)
	{
		printf("%i\n", (*h).n);
		h = (*h).next;
		count++;
	}
}
