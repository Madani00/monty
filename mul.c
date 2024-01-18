#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _mul - dividion
 * @row_cnt: the counter
 * @stack: stack
 * Return: Nothing
 */

void _mul(stack_t **stack, unsigned int row_cnt)
{

	int value;

	if (!((*stack)->next) || !stack || !*stack)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);
		return;
	}

	value = ((*stack)->next->n) * ((*stack)->n);

	pop(stack, row_cnt);

	(*stack)->n = value;
}
