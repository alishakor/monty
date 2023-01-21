#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <ctype.h>
#include <unistd.h>
#include <string.h>

#define STACK 1
#define QUEUE 0


/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * global_v - a structure that holds some global variables
 * @opcode: the operation code
 * @arg: the operation argument
 *
 * Description: some global variables for use across sorce files
 */

typedef struct global_v
{
	char *opcode;
	char *arg;
}variables;
extern variables var;


/*supporting_functions*/

void execute_monty(FILE *fp);
char get_tokens(char *linestr);
int init_list(stack_t **stack);
int checkmode(stack_t **stack);
void (*get_op(char *opcode))(stack_t**, unsigned int);



/*opcode_functions*/
void monty_push(stack_t **stack, unsigned int line number);
void monty_pall(stack_t **stack, unsigned int line number);
void monty_pint(stack_t **stack, unsigned int line number);
void monty_nop(stack_t **stack, unsigned int line number);
void monty_pop(stack_t **stack, unsigned int line number);
void monty_swap(stack_t **stack, unsigned int line number);
void monty_add(stack_t **stack, unsigned int line number);



/*error_functions*/
void unknown_error(char *opcode, unsigned int line_number);
void malloc_error(void);
void push_error(unsigned int line_number);
void pint_error(unsigned int line_number);
void pop_error(unsigned line_number);
void swap_error(unsigned int line_number);
void add_error(unsigned int line_number);



/*others functions*/
int check_arg(char *arg);
ssize_t getline(char **lineptr, size_t *n, FILE *stream);


#endif /*MONTY_H*/