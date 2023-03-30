#include "main.h"
/**
 * leet - encodes a string into 1337
 *@s: String
* Return: The resulting string
*/
char *leet(char *s)
{
	int index;
	int j;
	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (j = 0; a[j] != '\0'; j++)
		{
			if (s[index] == a[j])
				s[index] = b[j];
		}
	}
	return (s);
}
