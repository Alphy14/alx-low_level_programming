#include "main.h"
/**
 * print_number - Prints an integer
 * Return: No return value
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else
		m = n;
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar('0' + m % 10);
}
