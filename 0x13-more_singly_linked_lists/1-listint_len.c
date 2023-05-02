#include "lists.h"
#include <stdio.h>
/**
 * listint_len - returns the number of elements in a linked
 * listint_t list.
 * @h: Pointer to struct listint
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
