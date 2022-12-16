#include "main.h"
/**
 * *_strcat - will concatenates two strings
 * @dest: is a parameter
 * @src: is parameter
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (*(dest + len))
		len++;
	while (*(src + i))
	{
		*(dest + len)  = *(src + i);
		len++;
		i++;
	}
	*(dest + len) = '\0';
	return (dest);
}
