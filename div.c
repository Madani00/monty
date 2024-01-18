#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _div - divides the next higher value by the upper value
 * @stack: stack ( by hand )
 * @row_cnt: Row counter
 *
 * Return: void
 */
void _div(stack_t **stack, unsigned int row_cnt)
{
	int val;

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

	val = ((*stack)->next->n) / ((*stack)->n);
	pop(stack, row_cnt);/*For the top node*/
	(*stack)->n = val;
}
