#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	_putchar('0' + r);
	r = _isalpha('o');
	_putchar('0' + r);
	r = _isalpha(108);
	_putchar('0' + r);
	r = _isalpha(';');
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}
