#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - is the fun
 * @x: is the para
 * Return: 0
 */
int print_last_digit(int x)
{
	int y;

	if (x < 0)
		x = -x;
	y = x % 10;
	_putchar('0' + (x % 10));
	return (y);
}
