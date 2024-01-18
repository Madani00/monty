#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "monty.h"

/**
 * _sub -  substracts nodes
 * @stack: stack
 * @row_cnt: counter
 *
 * Return: Nothing
 */
void _sub(stack_t **stack, unsigned int row_cnt)
{
	int value;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);
	}

	value = ((*stack)->next->n) - ((*stack)->n);
	pop(stack, row_cnt);
	(*stack)->n = value;
}
