#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar('0' + r);
	r = _islower('o');
	_putchar('0' + r);
	r = _islower(108);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
