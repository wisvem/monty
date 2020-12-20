#include "monty.h"

void mod(stack_t **stack, unsigned int ln, char *inst, char *data)
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
		if (temp == 0)
		{
			fprintf(stderr, "L%u: division by zerot\n", ln);
			exit(EXIT_FAILURE);
		}
		else
		{
			(*(*h).next).n = (*(*h).next).n % temp;
			pop(stack, ln, inst, data);
		}
	}
	else
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", ln);
		exit(EXIT_FAILURE);
	}
}
