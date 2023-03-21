#include "main.h"
#include <stdio.h>
/**
 * _abs - Prints the absolute value of an integer
 * Return: Always 0 (Success)
 * @n: the integer to be checked
 */
int _abs(int n)
{

	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		int ret;

		ret = n * (-1);
		return (ret);
	}
	else if (n == 0)
	{
		return (n);
	}
	return (0);
}
