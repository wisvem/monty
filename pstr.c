#include "monty.h"

void pstr(stack_t **stack, unsigned int ln, char *inst, char *data)
{
	int number;
	stack_t *h = *stack;
	(void)stack;
	(void)number;
	(void)data;
	(void)ln;
	(void)inst;

	if (!*stack)
	{
		return;
	}
	while (h != NULL)
	{
		if ((*h).n < 1 || (*h).n > 255)
		{
			putchar('\n');
			return;
		}
		printf("%c", (*h).n);
		h = (*h).next;
	}
	putchar('\n');
}
