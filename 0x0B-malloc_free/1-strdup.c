#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: String
 * Return: On success, the _strdup function returns
 * a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *s;
	int index = 0;
	int len = 0;

	while (str[len])
		len++;

	s = malloc(sizeof(char) * (len + 1));

	if (str == NULL || s == NULL)
		return (NULL);
	while (str[index] != '\0')
	{
		s[index] = str[index];
		index++;
	}
	s[index] = '\0';
	return (s);
}
