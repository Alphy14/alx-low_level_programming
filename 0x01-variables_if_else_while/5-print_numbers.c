#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int b;

	b = 0;
	while (b < 10)
	{
		printf("%d", b);
		b = b + 1;
	}
	putchar('\n');
	return (0);
}
