#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: String
 * @c: Character
 * Return: pointer to the first occurrence of the character
 * c in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return (NULL);
}
