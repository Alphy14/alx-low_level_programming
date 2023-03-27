#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: One of the variables of type int whose value is to be swapped
 * @b: The other variable whose value is to be swapped
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int res;

	res =  *a;
	*a =  *b;
	*b = res;
}
