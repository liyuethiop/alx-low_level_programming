#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns sum
 * @n: fixed parameter
 * Return:sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list p;

	va_start(p, n);
	for (i = 0; i < n; i++)
		sum += va_arg(p, int);
	va_end(p);
	return (sum);
}
