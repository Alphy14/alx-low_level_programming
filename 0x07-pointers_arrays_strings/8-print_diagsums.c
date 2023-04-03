#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: Array
 * @size: Size of the array
 * Return: No return value
 */
void print_diagsums(int *a, int size)
{
	int index1, index2;
	int sum1 = 0;
	int sum2 = 0;

	for (index1 = 0; index1 <= (size * size); index1 = index1 + size + 1)
	{
		sum1 += a[index1];
	}
	for (index2 = size - 1; index2 <= (size * size) - size;
			index2 = index2 + size - 1)
	{
		sum2 += a[index2];
	}
	printf("%d, %d\n", sum1, sum2);
}
