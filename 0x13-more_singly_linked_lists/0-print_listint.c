#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements
 * of a listint_t list.
 * @h: Pointer to the struct listint
 * Return: the number of node
 */
size_t print_listint(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		if (h != NULL)
		{
			printf("%d\n", h->n);
		}

		num++;
		h = h->next;
	}
	return (num);
}
