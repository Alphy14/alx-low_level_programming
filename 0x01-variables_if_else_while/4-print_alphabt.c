#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 'a';
	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		putchar(c);
		c = c + 1;
	}
	putchar('\n');
	return (0);
}
