#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * Return: No return value
 * @n: The number of times the character '_' is printed
 */
void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		a = 1;
		while (a <= n)
		{
			_putchar(45);
			a++;
		}
		_putchar('\n');
	}
}
