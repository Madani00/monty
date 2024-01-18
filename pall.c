#include "monty.h"

/**
 * pall - display the values of the stack
 * @stack: stack
 * @row_cnt: the counter
 *
 * Return: Nothing
 */

void pall(stack_t **stack, unsigned int row_cnt __attribute__((unused)))
{
	print_stack(*stack);
}
