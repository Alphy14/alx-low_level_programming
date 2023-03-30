#include "main.h"
/**
 * string_toupper - changes all lowercase letters
 * of a string to uppercase
 *@str: String
* Return: The resulting string
*/

char *string_toupper(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		if (str[index] >= 97 && str[index] <= 122)
			str[index] = str[index] - 32;
	}
	return (str);
}
