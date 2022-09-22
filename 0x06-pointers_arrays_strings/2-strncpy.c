#include "main.h"
/**
 * _strncpy - will copy a string
 * @dest: is an array where src willbe copied to
 * @src: is the string to be copied
 * @n:the number of characters to copy
 * Return:0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
