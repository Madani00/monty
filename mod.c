#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * @row_cnt: Row counter
 * mod - calculate the remainder of the division
 * @stack: stack given by hand
 *
 * Return: void
 */
void mod(stack_t **stack, unsigned int row_cnt)
{

	int val;

	if (!((*stack)->next) || !stack || !*stack )
	{

		/* Can't mod, stack too short*/
		fprintf(stderr, "L%d: can't mod, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);

		return;

	}

	if (((*stack)->n) == 0)
	{
		/* Division by zero*/
		fprintf(stderr, "L%d: division by zero\n", row_cnt);
		exit(EXIT_FAILURE);

		return;

	}

	val = ((*stack)->next->n) % ((*stack)->n);

	pop(stack, row_cnt);  /*For the top node*/

	(*stack)->n = val;
}
