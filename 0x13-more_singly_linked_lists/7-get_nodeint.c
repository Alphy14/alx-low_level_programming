#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of
 * listint_t linked list.
 * @head: pointer to type struct
 * @index: the index of the node, starting at 0
 * Return: nth node of the list, and if the node does not exist,
 * return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	unsigned int num = 0;

	if (head != NULL)
	{
		while (temp != NULL)
		{
			if (num == index)
				return (temp);
			num++;
			temp = temp->next;
		}
	}
	return (NULL);
}
