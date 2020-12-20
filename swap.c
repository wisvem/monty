#include "monty.h"

void swap(stack_t **stack, unsigned int ln, char *inst, char *data)
{
	stack_t *h = *stack;
	int temp;
	(void)stack;
	(void)data;
	(void)ln;
	(void)inst;

	if ((s_len(h)) >= 2)
	{
		temp = (*h).n;
		(*h).n = (*(*h).next).n;
		(*(*h).next).n = temp;
	}
	else
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
}
