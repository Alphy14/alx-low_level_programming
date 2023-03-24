#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * Return: No return value
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int a;
	int b;
	int c;

	a = 0;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (a < size)
		{
			c = size - a - 1;
			b = 0;
			while (b < size)
			{
				if (c > b)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				b++;
			}
			a++;
			_putchar('\n');
		}
	}
}
