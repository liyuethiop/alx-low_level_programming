#include "main.h"
/**
 * print_rev - will print the reverse of a string
 * @s: is the parameter
 */
void print_rev(char *s)
{
	int i, len;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
