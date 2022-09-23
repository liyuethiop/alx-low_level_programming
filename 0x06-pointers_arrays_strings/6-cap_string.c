#include "main.h"
/**
 * cap_string - will capitalizes all words
 * @s:is the parameter
 * Return: the capitalized value
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ' || s[i] == ',' || s[i] == ';' ||
				s[i] == '\n' || s[i] == '.' ||
				s[i] == '!' || s[i] == '?' ||
				s[i] == '"' || s[i] == '(' ||
				s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= 32;
		}
	}
	return (s);
}
