#include "monty.h"

/**
* main - Todavia no se que hace este codigo
* @argc: number of arguments
* @argv: arguments
* Return: 0 succes
**/
int main(int argc, char **argv)
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	int x;
	unsigned int ln = 0;
	stack_t *stack = NULL;
	char *opcode, *data;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fp = fopen(argv[1], "r");
	if (fp == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((x = getline(&line, &len, fp)) != -1)
	{
		line[x - 1] = '\0';
		ln++;
		/*printf("Linea: %i\n", ln);*/
		/*printf("%s", line);*/
		opcode = strtok(line, " ");
		data = strtok(NULL, " ");

		if (opcode != NULL)
		{
			if (strcmp(opcode, "nop") != 0 || opcode[0] != '#')
			{
				if (get_instruction(opcode, data, &stack, ln) != 0)
				{
					printf("L%u: unknown instruction %s\n", ln, opcode);
					exit(EXIT_FAILURE);
				}
			}
		}
	}
	fclose(fp);
	if (line)
		free(line);
	exit(EXIT_SUCCESS);
}
