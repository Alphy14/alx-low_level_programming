#include "lists.h"
#include <stdlib.h>
/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to pointer of struct type.
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	int comp;
	size_t len = 0;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h)
	{
		comp = *h - (*h)->next;
		if (comp > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
