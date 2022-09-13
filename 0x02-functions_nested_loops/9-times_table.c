#include "main.h"
/**
 * times_table - is the fun
 * Return: the table
 */
void times_table(void)
{
	int x;
	int y;
	int z, t;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = x * y;

			if (y == 0)
				_putchar('0' + z);
			if (z / 10 == 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + z % 10);
							}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + z / 10);
				_putchar('0' + z % 10);
			}
		}
		_putchar('\n');
	}
}
