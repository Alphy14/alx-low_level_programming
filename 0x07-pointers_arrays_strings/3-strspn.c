#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: String
 * @accept: String
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int index;
	unsigned int val = 0;

	while (*s)
	{
		for (index = 0; accept[index] >= '\0'; index++)
		{
		if (*s == accept[index])
		{
			val++;
			break;
		}
		else if (accept[index + 1] == '\0')
			return (val);
		}
		s++;
	}
	return (0);
}
