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

	while (dest[len] != '\0')
		len++;
	while (src[i] != '\0')
	{
		dest[len]  = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
