#include <unistd.h>

/**
 * Return: x
 */

int _putchar(char x)
{
	return (write(1, &x, 1));
}
