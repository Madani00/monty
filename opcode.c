#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "./monty.h"

/**
 * opcode - function in charge of running builtins
 * @stack: stack given by main
 * @str: string to compare
 * @row_cnt: row counter
 *
 * Return: nothing
 */
void opcode(stack_t **stack, char *str, unsigned int row_cnt)
{


	instruction_t op[] = INSTRUCTIONS;	
	
	int ii = 0;

	if (!strcmp(str, "stack"))
	{
		global.data_struct = 1;
		return;
	}

	if (!strcmp(str, "queue"))
	{
		global.data_struct = 0;
		return;
	}

	while (op[ii].opcode)
	{
		if (strcmp(op[ii].opcode, str) == 0)
		{
			op[ii].f(stack, row_cnt);
			return; 
		}
		ii++;
	}

	fprintf(stderr, "L%d: unknown instruction %s\n", row_cnt, str);
	exit(EXIT_FAILURE);
}
