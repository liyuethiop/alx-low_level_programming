#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * /
 */
void print_char(va_list ch)
{
	printf("%c", va_arg(ch, int));
}

/**
 * print_int - prints int
 * @x:int to be printed
 * Return:x;
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 *
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 *
 */
void print_string(va_list s)
{
	char *x;

	x = va_arg(s, char *);
	if (x == NULL)
		x = "(nil)";
	printf("%s", x);
}

/**
 * print_all -prints all data types
 * @format:is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	tp var[] ={
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};
	va_list ptr;
	int i = 0;

	va_start(ptr, format);
	while (*format)
	{
		while (i < 4)
		{
			if (format == var[i].ch)
				var[i].f(ptr);
		}
		printf(",");
	}
}
