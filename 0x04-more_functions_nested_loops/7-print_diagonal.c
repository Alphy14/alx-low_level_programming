#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * Return: No return value
 * @n: the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		a = 0;
		while (a < n)
		{
			b = 0;
			while (b < a)
			{
				_putchar(' ');
				b++;
			}
			_putchar(92);
			_putchar('\n');
			a++;
		}
	}
}
