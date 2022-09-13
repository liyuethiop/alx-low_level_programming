#include "main.h"
/**
 * jack_bauer - is the fun
 * Return: 0
 */
void jack_bauer(void)
{
	int hour;
	int min;

	for (hour = 0; hour <= 23; hour++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar('0' + hour);
			_putchar(':');
			_putchar('0' + min);
		}
		_putchar('\n');
	}
}
