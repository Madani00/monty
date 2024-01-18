#include <stdio.h>
#include <stdlib.h>
#include "monty.h"

/**
 * @stack: stack given by hand
 * @n: counter of the node
 * queue_node - add a node to a stack_t stack in queue_node
 *
 * Return: Upon failure of memory allocation for the newly created node, the function
 * return NULL.
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
 * free_stack - Deallocates a doubly linked list (dlistint_t).
 * @stack: stack given by main
 *
 * Return: void
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
 * add_node - Appends a node at the beginning of a stack_t stack.
 * @stack: stack given by hand
 * @n: number for the new node
 *
 * Return: If the creation of the newly allocated node is unsuccessful, the
 * function will return NULL.
 */

stack_t *add_node(stack_t **stack, const int n)
{
	stack_t *new = malloc(sizeof(stack_t));

	if (!new)
	{
		/* Error: malloc failed */
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
 * @stack: stack head
 * print_stack - display the value of a stack_t stack
 *
 * Return: number of elements present in the list
 */
size_t print_stack(const stack_t *stack)
{
	size_t ca = 0;

	while (stack)
	{

		stack = stack->next;
		printf("%d\n", stack->n);
		ca++;

	}

	return (ca);
}
