#include "main.h"
#include <stdlib.h>
int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - Locates the index marking
 * the end of the first word within a string
 * @str: String
 * Return: The index
 */
int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}
	return (len);
}
/**
 * count_words - counts the number of words within a string
 * @str: String
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int words = 0, len = 0;
	int i;

	for (i = 0; *(str + i); i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
	}
	return (words);
}
/**
* strtow - splits a string into words
* @str: String
* Return: a pointer to an array of strings (words),
* and NULL, if failure
*/
char **strtow(char *str)
{
	char **a;
	int i = 0, words, w, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	words = count_words(str);
	if (words == 0)
		return (NULL);
	a = malloc(sizeof(char *) * (words + 1));
	if (a == NULL)
		return (NULL);
	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;
		letter = word_len(str + i);
		a[w] = malloc(sizeof(char) * (letter + 1));
		if (a[w] == NULL)
		{
			for (; w >= 0; w--)
				free(a[w]);
			free(a);
			return (NULL);
		}
		for (l = 0; l < letter; l++)
			a[w][l] = str[i++];
		a[w][l] = '\0';
	}
	a[w] = NULL;
	return (a);
}
