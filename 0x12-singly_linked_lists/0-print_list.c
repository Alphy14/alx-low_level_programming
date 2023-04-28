#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: Pointer to the list
 * Return: the number of node
 */
size_t print_list(const list_t *h)
{
	int num;

	num = 0;

	while (h)
	{
		if (!(h->str == NULL))
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		num++;
		h = h->next;
	}
	return (num);
}
