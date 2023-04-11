#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: Width of the array
 * @height: Height of the array
 * Return: NULL on failure, NULL If width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int index1;
	int index2;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}

	for (index1 = 0; index1 < height; index1++)
	{
		array[index1] = malloc(sizeof(int) * width);
		if (array[index1] == NULL)
		{
			for (index2 = index1; index2 >= 0; index2--)
			{
				free(array[index2]);
			}
			free(array);
			return (NULL);
		}
	}
	for (index1 = 0; index1 < height; index1++)
	{
		for (index2 = 0; index2 < width; index2++)
		{
			array[index1][index2] = 0;
		}
	}
	return (array);
}
