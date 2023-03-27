#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: The variable that contains the string to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int index = 0;

	while (s[index] != 0)
	{
		index++;
	}
	for (index = index - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
