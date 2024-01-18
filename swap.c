#include <stdio.h>
#include <string.h>
#include "monty.h"
#include <stdlib.h>


/**
 * swap -  swaps top values
 * @stack: stack
 * @row_cnt: counter
 *
 * Return: noth
 */
void swap(stack_t **stack, unsigned int row_cnt)
{
	stack_t *tmp = NULL;
	int tmp_n = 0;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);
	}
	tmp = *stack;
	tmp_n = tmp->n;
	tmp->n = tmp_n;
	tmp->n = tmp->next->n;

	tmp->next->n = tmp_n;
}
