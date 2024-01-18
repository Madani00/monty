#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint - print the top of the stack
 * @stack: stack
 * @row_cnt: the counter
 *
 * Return: Nothing
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
