#include "main.h"
/**
 * _puts - will print a string
 * @str: is the parameter
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}
