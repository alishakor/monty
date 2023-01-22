#include "monty.h"

/**
 * free_list - Function to free list memory
 * @list: List Argument
 */
void free_list(stack_t **list)
{
	stack_t *tmp;

	while (*list)
	{
		tmp = *list;
		*list = (*list)->next;
		free(tmp);
	}
}
