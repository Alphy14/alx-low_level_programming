#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes the node at index index of a
 * listint_t linked list.
 * @head: pointer to pointer of type struct.
 * @index: the index of the node that should be deleted.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a = 1;
	listint_t *temp = *head, *prev_node = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	temp = temp->next;
	while (temp != NULL)
	{
		if (a == index)
		{
			prev_node->next = temp->next;
			free(temp);
			return (1);
		}
		prev_node = temp;
		temp = temp->next;
		a++;
	}
	return (-1);
}
