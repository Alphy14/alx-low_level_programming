#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements
 * in a linked list_t list.
 * @h: pointer to the list
 * Return: the number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	int num;

	num = 0;

	while (h)
	{
		num++;

		h = h->next;
	}
	return (num);
}
