#include <stdlib.h>
#include "main.h"
/**
 * create_array - will create an array of chars
 * @size: is the size of the array
 * @c:is the character
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
