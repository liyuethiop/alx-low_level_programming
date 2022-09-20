#include "main.h"
/**
 * _strlen - will return the length of a string
 * @s: is the parameter
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
