#include "main.h"
/**
 * print_rev - will print the reverse of a string
 * @s: is the parameter
 */
void print_rev(char *s)
{
	int i, len, temp;

	while (*s != '\0')
	{
		s++;
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
	_puts(s);
	_putchar('\n');
}
