#include "main.h"
/**
 * times_table - is the fun
 * Return: the table
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;
			_putchar('0' + z / 10);
			_putchar('0' + z % 10);
			_putchar('\n');
		}
		_putchar('\n');
	}
}
