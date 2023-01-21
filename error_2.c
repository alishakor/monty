#include "monty.h"
/**
 * swap_error - A function that prints swap error
 * @line_number: Number Argument
 */
void swap(unsigned int line_number)
{
	fprintf(stderr,"L%d: can't swap, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
/**
 * add_error - A function that prints add error in monty
 * @line_number: Number Argument
 */
void add(unsigned int line_number)
{
	fprintf(stderr,"L%d: can't add, stack too short\n", line_number);
	exit(EXIT_FAILURE);
}
