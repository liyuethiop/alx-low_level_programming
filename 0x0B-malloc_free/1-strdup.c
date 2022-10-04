#include "main.h"
#include <stdlib.h>
/**
 * _strlen - will return the length of the string
 *_strdup - will return a pointer to a newly allocated space in memory
 * @str: is the string to be copied
 * Return:pointer to the duplicated string
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
char *_strdup(char *str)
{
	int j;
	char *s = (char *)malloc(_strlen(str) + 1);

	if (str == NULL)
		return (NULL);
	for (j = 0; *str != '\0'; j++)
		s[j] = str[j];
	return (s);
}
