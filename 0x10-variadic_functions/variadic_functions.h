#ifndef VARIADIc_FUN
#define VARIADIC_FUN
#include <stdio.h>
#include <stdrag.h>

int sum_them_all(const unsigned int n, ...);

void print_numbers(const char *separator, const unsigned int n, ...);

void print_strings(const char *separator, const unsigned int n, ...);

void print_all(const char * const format, ...);

#endif
