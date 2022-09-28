#include "main.h"
/**
 * _print_rev_recursion - will print a string in reverse
 * @s: is the parameter
 */
void _print_rev_recursion(char *s)
{
	/**if (*s == '\0')
	{
		_putchar('\n');
		return;
	}*/
	s--;
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}
