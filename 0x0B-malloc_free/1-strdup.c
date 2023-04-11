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

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;
	s = malloc(sizeof(char) * (len + 1));

	if (s == NULL)
		return (NULL);
	while (index < len)
	{
		s[index] = str[index];
		index++;
	}
	s[index] = '\0';
	return (s);
}
