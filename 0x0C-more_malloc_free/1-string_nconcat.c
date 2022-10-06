#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of s2 to be concatinated
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int len1 = 0, len2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		len1++, i++;
	while (*(s2 + j))
		len2++, j++;
	len2++; /* add null terminator to length */
	
	concat = malloc(sizeof(char) * (len1 + len2)); /*alloc memory*/
	
	if (concat == NULL)
		return (NULL);
	i = 0, j = 0;
	while (i < len1)
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (j < n)
	{
		*(concat + i) = *(s2 + j);
		i++, j++;
	}
	return (concat);
}
