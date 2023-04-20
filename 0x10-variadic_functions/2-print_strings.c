#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - prints strings,
 * followed by a new line.
 * @separator: the string to be printed
 * between the strings.
 * @n: the number of strings passed
 * to the function.
 * Return: void
 * If separator is NULL, don’t print it
 * If one of the string is NULL, print (nil) instead.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	unsigned int i;
	va_list arg;

	va_start(arg, n);

	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		s = va_arg(arg, char*);
		if (i != (n - 1))
			printf("%s%s", s, separator);
		else
			printf("%s", s);
	}
	printf("\n");
	va_end(arg);
}
