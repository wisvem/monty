#include "monty.h"

void pop(stack_t **stack, unsigned int ln, char *inst, char *data)
{
	stack_t *temp, *temp2;
	int number;

	(void)stack;
	(void)number;
	(void)data;
	(void)ln;
	(void)inst;

	temp = *stack;
	if (temp != NULL)
	{
		temp2 = (*temp).next;
		if (temp2 != NULL)
			(*temp2).prev = NULL;
		free(temp);
		temp = temp2;
		*stack = temp;
	}
	else
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", ln);
		exit(EXIT_FAILURE);
	}
	
}
