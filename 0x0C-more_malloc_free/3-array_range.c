#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: Minimum integer
 * @max: Maximum integer
 * Return: pointer to the newly created array
 * If min > max, return NULL
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *arr;
	int index;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	for (index = 0; min <= max; index++)
		arr[index] = min++;

	return (arr);
}
