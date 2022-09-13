#include "main.h"
/**
 * print_to_98 - prints all natural num
 * @n: is the para
 * Return: 0
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
			_putchar('0' + n);
		else if (n / 10 == 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + n);

		}
		else
		{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + n / 10);
			_putchar('0' + n % 10);
		}
		n++;
	}
	while (n >= 98)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
		_putchar(',');
		_putchar(' ');
		n--;
	}
}
