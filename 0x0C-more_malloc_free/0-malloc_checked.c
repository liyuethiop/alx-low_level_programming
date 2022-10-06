#include "main.h"
#include <stdlib>
/**
 * malloc_checked - will allocates memory
 * @b: is the parameter
 */
void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);
	if (p = NULL)
		return (98);
	return (p);
}
