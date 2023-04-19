#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer
 * @array: The given Array
 * @size: Number of elements in the given array
 * @cmp: Pointer to the function int_index
 * Return: index of the first element
 * for which the cmp function does not return 0,
 * -1, if size <= 0 and no element matches.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (index = 0; index < size; index++)
			{
				if (cmp(array[index]))
					return (index);
			}
		}
	}

	return (-1);
}
