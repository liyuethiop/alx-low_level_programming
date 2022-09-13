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
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n >= 98)
	{
		_putchar('0' + n);
		_putchar(',');
		_putchar(' ');
		n--;
	}
}
