#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
