#include "main.h"
/**
 * print_line - draws a straight line
 * @n: is the no of times the character _ appear
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
