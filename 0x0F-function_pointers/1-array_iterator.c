#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given as a paramete
 * on each element of an array.
 * @array: Array given
 * @size: Size of array
 * @action: Pointer to function
 * Return: Void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (array && action)
	{
		for (index = 0; index < size; index++)
			action(array[index]);
	}
}
