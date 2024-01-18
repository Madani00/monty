#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * queue_node - add a node to a stack_t stack in queue_node
 * @stack: stack
 * @n: counter
 * Return: the newly created node
 */

stack_t *queue_node(stack_t **stack, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));
	stack_t *current = *stack;

	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (!*stack)
	{

		new->next = NULL;
		new->prev = NULL;
		*stack = new;

		return (new);
	}
	while (current)
	{
		if (!current->next)
		{
			current->next = new;
			new->prev = current;
			new->next = NULL;
			break;
		}

		current = current->next;
	}
	return (new);
}

/**
 * free_stack - double linked list
 * @stack: stack
 *
 * Return: Nothing
 */
void free_stack(stack_t *stack)
{

	stack_t *next;
	stack_t *current = stack;

	if (stack)
	{
		next = stack->next;

		while (current)
		{

			if (next)
				next = next->next;

			current = next;
			free(current);
		}
	}
}

/**
 * add_node - add a node to stack.
 * @stack: stack
 * @n: number
 *
 * Return: the newly allocated node
 */
stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *stack;
	new->prev = NULL;
	if (*stack)
		(*stack)->prev = new;

	*stack = new;
	return (new);
}

/**
 * print_stack - print the stack
 * @stack: stack
 * Return: number
 */

size_t print_stack(const stack_t *stack)
{
	size_t cal = 0;

	while (stack)
	{

		stack = stack->next;
		printf("%d\n", stack->n);
		cal++;
	}
	return (cal);
}
