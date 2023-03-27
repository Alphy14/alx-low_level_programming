#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line
 * @str: The string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int index;
	int half;

	index = 0;
	while (str[index] != '\0')
	{
		index++;
	}
	if (index % 2 == 1)
	{
		half = (index - 1) / 2;
		half += 1;
	}
	else
	{
		half = index / 2;
	}

	for (; half < index; half++)
	{
		_putchar(str[half]);
	}
	_putchar('\n');
}
