#include "monty.h"

void serror(char *inst, unsigned int ln)
{
	printf("L%u: usage: %s integer\n", ln, inst);
	exit(EXIT_FAILURE);
}
