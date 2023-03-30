#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: Array
 * @n: The of elements in the array
 * Return: No return value
 */
void reverse_array(int *a, int n)
{
	int index;
	int tmp = 0;

	for (index = 0; index < n / 2; index++)
	{
		tmp = a[index];
		a[index] = a[n - 1 - index];
		a[n - 1 - index] = tmp;
	}
}
