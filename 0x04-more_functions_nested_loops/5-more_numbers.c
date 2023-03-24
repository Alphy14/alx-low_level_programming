#include "main.h"
/**
 * more_numbers - prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 * Return: No return value
 */
void more_numbers(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar('0' + b / 10);
			}
			_putchar('0' + b % 10);
			b++;
		}
		_putchar('\n');
		a++;
	}
}
