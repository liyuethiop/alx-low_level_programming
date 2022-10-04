#include "main.h"
#include <stdlib.h>
/**
 * _strlen - will return the length of the string
 * @str: is the string to be checked
 * Return: the size of the string
 */
int _strlen(char *str)
{
	int i = 0, len = 0;

	while (*(str +i))
	{
		len++;
		i++;
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
	size_t len;
	char *s;

	len = _strlen(str) + 1;
	s = (char *)malloc(sizeof(char) * len);

	if (str == NULL)
		return (NULL);
	if (s == NULL)
		return (NULL);

	for (j = 0; *str != '\0'; j++)
		*(s + j) = *(str + j);
	*(s + j) = '\0';
	return (s);
}
