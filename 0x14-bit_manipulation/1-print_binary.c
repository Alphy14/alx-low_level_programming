#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: decimal number
 * Return: no return value.
 */
void print_binary(unsigned long int n)
{
	int index = 63, num = 0;
	unsigned long int curr_binary;

	while (index >= 0)
	{
		curr_binary = n >> index;
		if (curr_binary & 1)
		{
			_putchar('1');
			num++;
		}

		else if (num)
			_putchar('0');

		index--;
	}
	if (!num)
		_putchar('0');
}
