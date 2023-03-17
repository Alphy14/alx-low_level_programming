#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;

	c = 'a';
	d = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c = c + 1;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d = d + 1;
	}
	putchar('\n');
	return (0);
}
