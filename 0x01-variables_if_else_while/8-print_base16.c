#include <stdio.h>
/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void)
{
	int boss;
	int alf;

	boss = 0;
	alf = 'a';
	while (boss <= 9)
	{
		putchar('0' + boss);
		boss = boss + 1;
	}
	while (alf <= 'f')
	{
		putchar(alf);
		alf = alf + 1;
	}
	putchar('\n');
	return (0);
}
