#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_char - prints char
 * @ch:the char
 */
void print_char(va_list ch)
{
	printf("%c", va_arg(ch, int));
}

/**
 * print_int - prints int
 * @i:int to be printed
 */
void print_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * print_float - prints float
 * @f:the float
 */
void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - prints string
 * @s:the string
 */
void print_string(va_list s)
{
	char *x, *y;

	x = va_arg(s, char *);
	y = x == NULL ? "(nil)" : x;
	printf("%s", y);
}

/**
 * print_all -prints all data types
 * @format:is a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	tp var[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	va_list ptr;
	int i = 0, j = 0;

	va_start(ptr, format);
	while (format != NULL && format[i])
	{
		j = 0;
		while (var[j].ch)
		{
			if (format[i] == *(var[j].ch))
			{
				var[j].f(ptr);
				break;
			}
			j++;
		}
		if (var[j + 1].ch)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(ptr);
}
