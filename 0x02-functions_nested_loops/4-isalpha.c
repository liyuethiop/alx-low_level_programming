#include "main.h"
/**
 * _isalpha - is the function
 * @c: is the parameter
 * Return: 0
 */
int _isalpha(int c)
{
	int x;

	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
		x = 1;
	else
		x = 0;
	return (x);
}
