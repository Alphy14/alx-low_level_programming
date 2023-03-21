#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar('0' + r);
	_putchar('\n');
	r = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar('0' + r);
	_putchar('\n');
	r = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar('0' + r);
	_putchar('\n');
	r = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
