#include "main.h"
/**
 * factorial -  returns the factorial of a given number
 * @n: The given number
 * Return: -1 If n is lower than 0, to indicate an error,
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
