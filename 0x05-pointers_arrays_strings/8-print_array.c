#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers,
 * followed by a new line
 * @n: the number of elements of the array to be printed
 * @a: Points to the array
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int index;


	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index != (n - 1))
			printf(", ");
	}
	putchar('\n');
}
