#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * mod - calculation of division
 * @stack: stack
 * @row_cnt: the counter
 *
 * Return: Nothing
 */

void mod(stack_t **stack, unsigned int row_cnt)
{

	int val;

	if (!((*stack)->next) || !stack || !*stack)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);
		return;
	}

	if (((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", row_cnt);
		exit(EXIT_FAILURE);

		return;

	}

	val = ((*stack)->next->n) % ((*stack)->n);

	pop(stack, row_cnt);

	(*stack)->n = val;
}
