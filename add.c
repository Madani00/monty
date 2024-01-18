#include <stdio.h>
#include <ctype.h>
#include "monty.h"
#include <stdlib.h>
#include <string.h>


/**
 * _add - add node
 * @stack: stack provided
 * @row_cnt: the counter
 * Return: Nothing
 */

void _add(stack_t **stack, unsigned int row_cnt)
{
	int value;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);
	}
	value = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, row_cnt);
	(*stack)->n = value;
}
