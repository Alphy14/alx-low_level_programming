#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	return (0);
}
