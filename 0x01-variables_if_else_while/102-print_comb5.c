#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;
	int a;
	int b;
	int c;
	int d;

	for (num1 = 0; num1 < 100; num1++)
	{
		a = num1 / 10;
		b = num1 % 10;

		for (num2 = 0; num2 < 100; num2++)
		{
			c = num2 / 10;
			d = num2 % 10;

			if ((a < c) || (a == c && b < d))
			{
				putchar('0' + a);
				putchar('0' + b);
				putchar(' ');
				putchar('0' + c);
				putchar('0' + d);

				if ((a != 9) || (b != 8))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
