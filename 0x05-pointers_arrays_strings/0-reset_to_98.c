#include "main.h"
/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to to 98
 * @n: The pointer whose value is to be updated
 * Return: Nothing
 */
void reset_to_98(int *n)
{
	*n = 98;

	_putchar('0' + (*n));
}
