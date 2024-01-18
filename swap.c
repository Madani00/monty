#include <stdio.h>
#include <string.h>
#include "monty.h"
#include <stdlib.h>


/**
 * swap -  swaps values top to previous
 * @stack: stack by main
 * @row_cnt: row counter
 *
 * Return: void
 */
void swap(stack_t **stack, unsigned int row_cnt)
{
	stack_t *tmp = NULL;
	int tmp_n = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		/* Can't swap, stack too short*/
		fprintf(stderr, "L%d: can't swap, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);
	}

	tmp = *stack;
	tmp_n = tmp->n;

	tmp->n = tmp_n;

	tmp->n = tmp->next->n;

	tmp->next->n = tmp_n;
}
