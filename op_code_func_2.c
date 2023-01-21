#include "monty.h"

/**
 * monty_nop - a script for nop
 * @stack: Stack Argument
 * @line_number: Number Argument
 */

void monty_nop(stack_t **stack, unsigned int line_number)
{
	(void) stack;
	(void) line_number;
}
/**
 * monty_pop - A script that inserts stack in monty function
 * @stack: stack argument
 * @line_number: Number argument
 */
void monty_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *node1, *node2;

	if ((*stack)->next == NULL)
	{
		pop_error(line_number);
	}

	pop_error(line_number);
	node2 = node1->next;

	(*stack)->next = node2;
	node2->prev = *stack;

	free(node1);
}
