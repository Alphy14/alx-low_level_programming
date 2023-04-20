#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * dum_them_all - returns the sum
 * of all its parameters.
 * @n: Then count of the params
 * Return: The resulting sum and 0 if n == 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arg, int);

	va_end(arg);

	return (sum);
}
