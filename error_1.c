#include "monty.h"

/**
 * malloc_error - A function that prints malloc error
 * @List: List Argument
 *
 * Return: EXIT_FAILURE
 */
void malloc_error(stack_t **list)
{
	fprintf(stderr, "Error: malloc failed\n");
	free_list(list);
	exit(EXIT_FAILURE);
}

/**
 * push_error - A function that prints push error
 * @line_number: Number Argument
 * @list: List Argument
 *
 * Return: EXIT_FAILURE
 */
void push_error(stack_t **list, unsigned int line_number)
{
	fprintf(stderr,"L%d: usage: push integer\n", line_number);
	free_list(list);
	exit(EXIT_FAILURE);
}

/**
 * pint_error - A function that prints pint error
 * @line_number: Number Argument
 * @list: List Argument
 *
 * Return: EXIT_FAILURE
 */
void pint_error(stack_t **list, unsigned int line_number)
{
	fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
	free_list(list);
	exit(EXIT_FAILURE);
}

/**
 * pop_error - A function that prints pop error
 * @line_number: Number Argument
 * @list: List Argument
 *
 * Return: EXIT_FAILURE
 */
void pop_error(stack_t **list, unsigned line_number)
{
	fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
	free_list(list);
	exit(EXIT_FAILURE);
}
