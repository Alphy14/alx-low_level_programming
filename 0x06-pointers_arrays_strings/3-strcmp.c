#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Resulting string
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		else
			return (0);
	}
	index++;
	return (0);
}
