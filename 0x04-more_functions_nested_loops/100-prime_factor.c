#include <stdio.h>
#include <math.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143,
 * followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int a, div;

	a = 612852475143;
	for (div = 2; div <= sqrt(a); div++)
	{
		if (a % div == 0)
		{
			a = a / div;
			div = 1;
		}
	}
	printf("%ld\n", a);
	return (0);
}
