#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointeerto a list.
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *find_loop = head;
	listint_t *address = head;

	while (find_loop != NULL && address != NULL)
	{
		address = address->next;
		find_loop = find_loop->next->next;
		if (find_loop == address)
		{
			find_loop = head;
			while (address != find_loop)
			{
				address = address->next;
				find_loop = find_loop->next;
			}
			return (address);
		}
	}
	return (NULL);
}
