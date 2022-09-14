#include "main.h"
/**
 * print_times_table - is the fun
 * @n: is the para
 * Return: the table
 */
void print_times_table(int n)
{
	int x;
	int y;
	int z;

	if (n <= 15 && n >= 0)
	{

		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (y == 0)
					_putchar('0' + z);
				else if (z / 10 == 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + z % 10);

				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + z / 10);
					_putchar('0' + z % 10);
				}
			}
			_putchar('\n');
		}
	}
}
