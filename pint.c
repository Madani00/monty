#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint - Output the value at the top of the stack.
 * @stack: stack given by hand in start.c
 * @row_cnt: Row counter
 *
 * Return: void
 */

void pint(stack_t **stack, unsigned int row_cnt)
{

	if (!(*stack) || !stack)
	{

		fprintf(stderr, "L%d: can't pint, stack empty\n", row_cnt);

		exit(EXIT_FAILURE);

	}

	printf("%d\n", (*stack)->n);
}
