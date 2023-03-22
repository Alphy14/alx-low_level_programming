#include "main.h"
/**
 * print_times_table - prints the n times table starting from 0
 * Return: No return value
 * @n: The number ehose times table is to be printed
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
			c = a * b;
			if (b == 0)
			_putchar('0' + c);
			else if (c < 10 && b != 0)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + c);
			}
			else if (c >= 10 && c < 100)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + (c / 10));
			_putchar('0' + (c % 10));
			}
			else if (c >= 100)
			{
			_putchar(',');
			_putchar(' ');
			_putchar((c / 100) + '0');
			_putchar(((c / 10) % 10) + '0');
			_putchar((c % 10) + '0');
			}
			}
		_putchar('\n');
		}
	}
}
