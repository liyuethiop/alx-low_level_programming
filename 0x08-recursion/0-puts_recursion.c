#include "main.h"
/**
 * _puts_recursion - will print a string using recursion
 * @s: is the parameter
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
		return;
	_putchar(*s);
	_puts_recursion(s++);
}
