#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to a string of bits
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b that
 * is not 0 or 1, or b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	int index = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] < '0' || b[index] > '1')
			return (0);

		num = 2 * num + (b[index] - '0');

		index++;
	}

	return (num);
}
