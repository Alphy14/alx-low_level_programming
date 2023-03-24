#include "main.h"
/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 * Return: No return value
 */
void print_square(int size)
{
	int m, n;

	m = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (m < size)
		{
			n = 0;
			while (n < size)
			{
				_putchar('#');
				n++;
			}
			m++;
			_putchar('\n');
		}
	}
}
