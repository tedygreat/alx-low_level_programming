#include "3-calc.h"

/**
 * get_op_func - function pointer to select correct func
 * @s: operater var
 * Return: result
 */
 
int (*get_op_func(char *s))(int, int)
{
		int i;
			i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	while (ops[i].op)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
		
