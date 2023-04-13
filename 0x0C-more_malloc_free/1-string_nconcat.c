#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat -  concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes
 * Return: a pointer to a newly allocated space in memory,
 * which contains s1, followed by the first n bytes of s2,
 * and null terminated.If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len1 = 0, len2 = 0, index1 = 0, index2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (s1 == NULL)
		len1 = 0;
	if (s2 == NULL)
		len2 = 0;
	if (n >= len2)
		n = len2;
	s3 = malloc(sizeof(char) * (len1 + n + 1));
	if (s3 == NULL)
		return (NULL);
	if (s1)
	{
		for (index1 = 0; index1 < len1; index1++)
			s3[index1] = s1[index1];
	}
	if (s2)
	{
		for (index2 = 0; index2 < n; index2++)
			s3[index1++] = s2[index2];
	}
	s3[index1] = '\0';
	return (s3);
}
