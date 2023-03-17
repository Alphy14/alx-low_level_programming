#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int q;

	q = 0;
	while (q < 10)
	{
		putchar('0' + q);
		q = q + 1;
	}
	putchar('\n');
	return (0);
}
