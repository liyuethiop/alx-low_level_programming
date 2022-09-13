#include "main.h"
/**
 * times_table - is the fun
 * Return: the table
 */
void times_table(void)
{
	int x;
	int y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
			_putchar('0' + x * y);
		_putchar('\n');
	}
}
