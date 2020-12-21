#include "monty.h"

/**
 * bring_pizza - initialize pizza struct
 **/
void bring_pizza(void)
{
	m.fp = NULL;
	m.line = NULL;
	m.ln = 0;
	m.stack = NULL;
	m.inst = NULL;
	m.data = NULL;
}

/**
 * free_pizza - frees the struct
 */
void free_pizza(void)
{
	fclose(m.fp);
	if (m.line)
		free(m.line);
	free_stack();
	exit(EXIT_SUCCESS);
}

/**
* free_stack - frees a list
**/
void free_stack()
{
	stack_t *head = m.stack;
	stack_t *temp;

	while (head != NULL)
	{
		temp = (*head).next;
		free(head);
		head = temp;
	}
	head = NULL;
}
