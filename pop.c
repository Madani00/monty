#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
* pop - Removes the element at the very top of the stack.
* @stack: stack given by main in start.c
* @row_cnt: Row number for error messages
*
* Return: void
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
