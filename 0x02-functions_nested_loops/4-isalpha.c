#include "main.h"
/**
 * _isalpha - prints alphabets
 * Return: 1 if c is an alphabet, either lower or uppercase
 * 0, if otherwise
 *@c: The character to be checked
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
