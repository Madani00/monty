#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
* pop - delete the top elem of the stack
* @stack: stack
* @row_cnt: row numbers
*
* Return: Nothing
*/

void pop(stack_t **stack, unsigned int row_cnt)
{

	stack_t *tmp = NULL;

	if (!stack || !*stack)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", row_cnt);

		exit(EXIT_FAILURE);
	}
	free(*stack);
	tmp = (*stack)->next;

	*stack = tmp;

	if (!*stack)
		return;

	(*stack)->prev = NULL;
}
