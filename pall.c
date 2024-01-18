#include "monty.h"

/**
 * @stack: stack provided by the main function start.c
 * @row_cnt: number of row
 * pall - display the stack
 *
 * Return: void
 */

void pall(stack_t **stack, unsigned int row_cnt __attribute__((unused)))
{
	/*  display the stack */
	print_stack(*stack);

}
