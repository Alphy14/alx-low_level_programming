#include "main.h"
/**
 * _isupper - checks for uppercase character
 * Return: Always 0 (Success)
 * @c: The character to be checked
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
		return (0);
}
