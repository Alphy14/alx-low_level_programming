#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	num = 0;
	while (num <= 9)
	{
		putchar('0' + num);
		num = num + 1;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
