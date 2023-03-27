#include "main.h"
/**
 * _strcpy - copies the string pointed by a var
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest
 * @src: A pointer to a string
 * @dest: The other pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *res = dest;

	while (*src != '\0')
	{
		*dest =  *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (res);
}
