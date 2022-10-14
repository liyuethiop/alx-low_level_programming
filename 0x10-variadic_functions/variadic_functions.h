#ifndef VARIADIc_FUN
#define VARIADIC_FUN
#include <stdio.h>
#include <stdarg.h>

/**
 * struct type - holds different data type
 * @ch:character that represent the data type
 * @f:function pointer
 */

typedef struct type
{
	char *ch;
	void (*f)(va_list);
}tp;

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
