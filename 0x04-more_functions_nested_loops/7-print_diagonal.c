#include "main.h"
/**
 * print_diagonal - is the fun
 * @n: is the parameter
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			_putchar("%c\n", '\');
			for (j = 1; j <= i; j++)
				_putchar(' ');
		}
	}
	else
		_putchar('\n');
}
