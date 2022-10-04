#include "main.h"
#include <stdlib.h>
/**
 * _strlen - will return the length of the string
 * @str: is the string to be checked
 * Return: the size of the string
 */
int _strlen(char *str)
{
	int i, len = 0;

	for (i = 0; *str != '\0'; i++)
	{
		len++;
		str++;
	}
	return (len);
}
/**
 * _strdup - will return a pointer to a newly allocated space in memory
 * @str: is the string to be copied
 * Return:pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int j;
	char *s = (char *)malloc(_strlen(str) + 1);

	if (str == NULL)
		return (NULL);
	if (s ==NULL)
		return (NULL);
	for (j = 0; *str != '\0'; j++)
		s[j] = str[j];
	s[j] = '\0';
	return (s);
}
