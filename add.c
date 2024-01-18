#include <stdio.h>
#include <ctype.h>
#include "monty.h"
#include <stdlib.h>
#include <string.h>


/**
 * @stack: stack given by hand
 * @row_cnt: Row counter
 * _add -  add the first two nodes of the stack
 *
 * Return: void
 */
void _add(stack_t **stack, unsigned int row_cnt)
{
	int val;
	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);
	}
	val = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, row_cnt); /*For the top node*/
	(*stack)->n = val;

}
