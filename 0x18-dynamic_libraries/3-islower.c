#include "main.h"
/**
 * _islower - checks for lowercase
 * @c: parameter
 * Return: 0
 */
int _islower(int c)
{
	int x;

	if (c >= 97 && c <= 122)
		x = 1;
	else
		x = 0;
	return (x);
}
