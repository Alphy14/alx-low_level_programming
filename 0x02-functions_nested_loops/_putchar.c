#include <unistd.h>
/**
 * _putchar - Writes the character a to stdout
 * &a - The character to print
 * Return: On success 1
 * On error, -1 is returned, and errno is set approximately
 * a - The parameter passed for the _putchar function
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
