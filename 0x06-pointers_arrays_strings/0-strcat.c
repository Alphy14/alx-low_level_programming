#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return:  a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int index;
	int dest_len = 0;
	int src_len = 0;

	for (index = 0; dest[index] != '\0'; index++)
		dest_len++;
	for (index = 0; src[index] != '\0'; index++)
		src_len++;

	for (index = 0; index <= src_len; index++)
	{
		dest[dest_len + index] = src[index];
	}
	return (dest);
}
