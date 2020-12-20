#include "monty.h"

void push(stack_t **stack, unsigned int ln, char *inst, char *data)
{
	int n; 
	stack_t *newnode = NULL;
	
	(void)stack;

	if (data == NULL)
	{
		serror(inst, ln);
	}
	n = satoi(data, inst, ln);
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		fprintf(stderr, "Error: malloc failed");
		exit(EXIT_FAILURE);
	}
	
	(*newnode).n = n;
	(*newnode).prev = NULL;
	(*newnode).next = *stack;
	if (*stack != NULL)
	{
		(**stack).prev = newnode;
	}
	*stack = newnode;
}
