#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "monty.h"

/**
 * _sub -  substracts the first two nodes of the stack
 * @stack: stack given by main
 * @row_cnt: row counter
 *
 * Return: void
 */
void _sub(stack_t **stack, unsigned int row_cnt)
{
	int val;

	if (!stack || !*stack || !((*stack)->next))
	{
		/* Can't sub, stack too short */
		fprintf(stderr, "L%d: can't sub, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);

	}

	val = ((*stack)->next->n) - ((*stack)->n);
	/*is top node*/
	pop(stack, row_cnt);
	(*stack)->n = val;
}
