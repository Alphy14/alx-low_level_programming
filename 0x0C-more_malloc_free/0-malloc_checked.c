#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: allocated memory
 * Return: a pointer to the allocated memory,
 * or causes normal process termination
 * with a status value of 98 if malloc fails.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
