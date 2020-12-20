#include "monty.h"

/**
* get_print - get the correct function
* @tipo: format specifier
* Return: pointer to the correct function
**/
int get_instruction(char *inst, char *data, stack_t **stack, unsigned int ln)
{
	int i;
	void (*f)();
	instruction_tx op[] = {
		{"push", push},
		{"pall", pall},
		{"pop", pop},
		{"pint", pint},
		{"sawp", swap},
		{NULL, NULL}
	};
	for (i = 0; op[i].opcode; i++)
	{
		if (strcmp(inst, op[i].opcode) == 0)
		{
			f = op[i].f;
			f(stack, ln, inst, data);
			return (0);
		}
	}
	return (1);
}
