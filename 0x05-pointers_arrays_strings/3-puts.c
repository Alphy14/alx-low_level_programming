#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: The variable that contains the string to be printed
 * Return: No return value
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
