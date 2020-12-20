#include "monty.h"

/**
* satoi - atoi on stroids
* @s: string
* Return: int
**/
int satoi(char *data, char *inst, unsigned int ln)
{
	int num = atoi(data);
	int cmp = strcmp(data, "0");
	int i = 0;

	if (data[i] == 45)
	{
		cmp = strcmp(data, "-0");
		i++;
	}
	while (data[i] != '\0')
	{
		if (data[i] < 48 || data[i] > 57)
		{
			serror(inst, ln);
		}
		i++;
	}
	if (num == 0 && cmp != 0)
	{
		serror(inst, ln);
	}
	return(num);
}
