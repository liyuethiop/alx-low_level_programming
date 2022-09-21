#include "main.h"
/**
 * *_strcat - will concatenates two strings
 * @dest: is a parameter
 * @src: is parameter
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	while (*dest != '\0')
	{
		len++;
		dest++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + len]  = src[i];
	}
	dest[i + len] = '\0';
	return (dest);
}
