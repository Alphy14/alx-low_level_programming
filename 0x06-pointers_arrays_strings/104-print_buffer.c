#include "main.h"
#include <stdio.h>
/**
 * print_buffer -  prints a buffer
 * @b: Buffer
 * @size: size
 * Return: Nothing
 */
void print_buffer(char *b, int size)
{
	int output, a, c;

	output = 0;

	if (size <= output)
	{
		printf("\n");
		return;
	}
	while (output < size)
	{
		c = size - output < 10 ? size - output : 10;
		printf("%08x: ", output);
		for (a = 0; a < 10; a++)
		{
			if (a < c)
				printf("%02x", *(b + output + a));
			else
				printf(" ");
			if (a % 2)
				printf(" ");
		}
		for (a = 0; a < c; a++)
		{
			int d = *(b + output + a);

			if (d < 32 || d > 132)
				d = '.';
			printf("%c", d);
		}
		printf("\n");
		output += 10;
	}
}
