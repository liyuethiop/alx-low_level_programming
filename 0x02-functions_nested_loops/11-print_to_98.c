#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural num
 * @n: is the para
 * Return: 0
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	if (n == 98)
	printf("%i", n);

}
