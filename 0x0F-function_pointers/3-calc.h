#ifndef CALC_H
#define CALC_H
#include <stdlib.h>
/**
 * struct op - struct op to perform simple operation
 *
 * @op: The operator to  help us perform the action
 * @f: function associated to the operation
 */
typedef struct op
{
	char *op;
	int (*f)(int q, int w);
} op_t;
/* function prototype */
int op_add(int q, int w);
int op_sub(int q, int w);
int op_mul(int q, int w);
int op_div(int q, int w);
int op_mod(int q, int w);
#endif
