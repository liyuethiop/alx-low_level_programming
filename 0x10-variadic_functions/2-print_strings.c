#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator:string to be printed between numbers
 * @n:number of integers passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	char *s;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ptr, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
