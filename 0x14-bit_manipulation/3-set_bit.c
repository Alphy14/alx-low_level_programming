#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: points to a string of num
 * @index: the index of the num
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
