#include <stdio.h>
#include "monty.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * push - Adds element ----->  stack
 * @stack: stack
 * @row_cnt: counter
 * Return: Nothing
 */

void push(stack_t **stack, unsigned int row_cnt)
{
	char *number = global.argument;

	if ((is_digit(number)) == 0)
	{

		fprintf(stderr, "L%d: usage: push integer\n", row_cnt);

		exit(EXIT_FAILURE);

	}
	if (global.data_struct == 1)
	{

		if (!add_node(stack, atoi(global.argument)))
		{

			exit(EXIT_FAILURE);
		}
	}
	else
	{
		if (!queue_node(stack, atoi(global.argument)))
		{

			exit(EXIT_FAILURE);
		}
	}
}
