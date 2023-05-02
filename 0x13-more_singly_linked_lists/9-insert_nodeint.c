#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to pointer of type struct.
 * @idx: index of the list where the new node should be added
 * @n: value to be added into the node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 0;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *prev_node = *head;
	listint_t *temp = (*(head))->next;

	if (head == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (temp != NULL)
	{
		if (a == idx - 1)
		{
			prev_node->next = new_node;
			new_node->next = temp;
			return (new_node);
		}
		prev_node = temp;
		temp = temp->next;
		a++;
	}
	if (temp == NULL && a == idx)
	{
		prev_node->next = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
