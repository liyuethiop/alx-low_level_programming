#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: the name to be printed
 * @f:function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (NULL);
	f(name);
}
