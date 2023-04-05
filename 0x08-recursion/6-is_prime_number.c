#include "main.h"
int actual_prime(int n, int a);
/**
 * is_prime_number - checks if the input integer is prime
 * @n: The input integer
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime(n, n / 2));
}
/**
 * actual_prime - finds if a number is prime or not
 * @n: Number
 * @a: iterator
 * Return: The resulting prime
 */
int actual_prime(int n, int a)
{
	if (a == 1)
		return (1);
	else if (n % a == 0)
		return (0);
	else
		return (actual_prime(n, a - 1));
}
