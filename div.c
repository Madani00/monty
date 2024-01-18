#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _div - divides
 * @stack: stack provided
 * @row_cnt: the counter
 *
 * Return: Nothing
 */

void _div(stack_t **stack, unsigned int row_cnt)
{
	int value;

	if (!((*stack)->next) || !stack || !*stack)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);
	}
	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", row_cnt);
		exit(EXIT_FAILURE);
		;
		return;
	}

	value = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, row_cnt);/*For the top node*/
	(*stack)->n = val;
}
