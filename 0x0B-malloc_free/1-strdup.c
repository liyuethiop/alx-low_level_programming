#include "main.h"
#include <stdlib.h>
/**
 * _strdup - will return a pointer to a newly allocated space in memory
 * @str: is the string to be copied
 * Return:pointer to the duplicated string
 */
char *_strdup(char *str)
{
	int i, len = 0;

	for (i = 0; *str != '\0'; i++)
		len++;
	char *s = (char *)malloc(len);

	if (str == NULL)
		return (NULL);
	for (i = 0; *str != '\0'; i++)
		s[i] = str[i];
	return (s);
}
