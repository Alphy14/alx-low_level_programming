#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: Size of the array
 * @c: The specified character
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *tmp;
	unsigned int index = 0;

	tmp = malloc(sizeof(char) * size);

	if (size == 0 || tmp == 0)
		return (NULL);
	while (index < size)
	{
		tmp[index] = c;
		index++;
	}
	tmp[index] = '\0';
	return (tmp);
}
