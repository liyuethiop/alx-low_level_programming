#include "main.h"
/**
 * *_strncat - will concatenates two strings
 * @dest: is a parameter
 * @src: is parameter
 * @n: is a parameter
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	while (*dest != '\0')
	{
		len++;
		dest++;
	}
	for (i = 0; i < n; i++)
	{
		dest[i + len]  = src[i];
	}
	dest[i + len] = '\0';
	return (dest);
}
