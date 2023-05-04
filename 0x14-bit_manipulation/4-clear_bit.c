#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: points to a string of num
 * @index: the index of the given num
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);
	a = 1 << index;

	if (*n & a)
	{
		*n = (*n ^ a);
	}
	return (1);
}
