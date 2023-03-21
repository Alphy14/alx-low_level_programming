#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number
 * Return: Value of Last_digit
 * @n: The number whose last digit is to be determined
 */
int print_last_digit(int n)
{
	int Last_digit;

	Last_digit = n % 10;
	if (Last_digit < 0)
	{
		Last_digit = Last_digit * -1;
	}
	_putchar('0' + Last_digit);
	return (Last_digit);
}
