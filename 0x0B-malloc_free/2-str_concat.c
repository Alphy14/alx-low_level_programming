#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1,
 * followed by the contents of s2, and null terminated, and NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int s1_len = 0;
	int s2_len = 0;
	int index1 = 0;
	int index2 = 0;

	while (s1 && s1[s1_len])
		s1_len++;
	while (s2 && s2[s2_len])
		s2_len++;

	s3 = malloc(sizeof(char) * (s1_len + s2_len + 1));

	if (s3 == NULL)
		return (NULL);
	if (s1)
	{
		while (index1 < s1_len)
		{
			s3[index1] = s1[index1];
			index1++;
		}
	}
	if (s2)
	{
		while (index1 < (s1_len + s2_len))
		{
			s3[index1] = s2[index2];
			index1++;
			index2++;
		}
	}
	s3[index1] = '\0';
	return (s3);
}
