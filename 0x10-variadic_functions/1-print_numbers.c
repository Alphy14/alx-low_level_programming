#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers,
 * followed by a new line.
 * @separator: the string to be printed
 * between numbers.
 * @n: the number of integers passed
 * to the function.
 * Return: Void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list b;

	if (separator == NULL)
		separator = "";
	va_start(b, n);

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d%s", va_arg(b, int), separator);
		else
			printf("%d", va_arg(b, int));
	}
	printf("\n");
	va_end(b);
}
