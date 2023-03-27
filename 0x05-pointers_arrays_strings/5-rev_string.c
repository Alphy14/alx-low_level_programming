#include "main.h"
/**
 * rev_string - reverses a string
 * @s: String
 * Return: No return value
 */
void rev_string(char *s)
{
	int index, len;
	char temp;

	index = 0, len = 0;
	while (s[index++])
	{
		len++;
	}
	for (index = len - 1; index >= len / 2; index--)
	{
		temp = s[index];
		s[index] = s[len - index - 1];
		s[len - index - 1] = temp;
	}
}
