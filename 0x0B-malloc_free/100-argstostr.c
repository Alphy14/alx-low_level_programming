#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 * Return: pointer to a new string, or NULL if it fails
 * @ac: argument count
 * @av: argument vector
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int index1 = 0, index2 = 0, c = 0, b = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (index1 < ac)
	{
		while (av[index1][index2])
		{
			c++;
			index2++;
		}
		index2 = 0;
		index1++;
	}
	a = malloc((sizeof(char) * c) + ac + 1);
	index1 = 0;
	while (av[index1])
	{
		while (av[index1][index2])
		{
			a[b] = av[index1][index2];
			b++;
			index2++;
		}
		a[b] = '\n';
		index2 = 0;
		b++;
		index1++;
	}
	b++;
	a[b] = '\0';
	return (a);
}
