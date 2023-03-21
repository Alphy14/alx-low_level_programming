#include "main.h"
/**
 * _islower - Entry point of the program
 * Return: 1 if lowercase
 * 0, if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
