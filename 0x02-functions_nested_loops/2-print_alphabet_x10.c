#include "main.h"
/**
 * print_alphabet_x10 - Prints alphabets x10
 * Return: No return value
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int b;

	while (a < 10)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		a++;
	}
}

