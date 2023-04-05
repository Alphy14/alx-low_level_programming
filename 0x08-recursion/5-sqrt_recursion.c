#include "main.h"
int actual_sqrt(int n, int i);
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: Number
 * Return: The natural square root of a number, or
 * -1 If n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt(n, 0));
}
/**
 * actual_sqrt - returns the actual natural square root
 * of a number
 * @n: Number
 * @i: Iterator
 * Return: The resulting square root
 */
int actual_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (actual_sqrt(n, i + 1));
}
