#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * @n: Specified bytes from source
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int index;
	int destlen = 0;
	int srclen = 0;

	for (index = 0; dest[index] != '\0'; index++)
		destlen++;
	for (index = 0; src[index] != '\0'; index++)
		srclen++;

	for (index = 0; index < n; index++)
		dest[destlen + index] = src[index];
	return (dest);
}
