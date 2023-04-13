#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: elements of the array
 * @size: Size of the array
 * Return: a pointer to the allocated memory.
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < (nmemb * size); index++)
		arr[index] = 0;

	return (arr);
}
