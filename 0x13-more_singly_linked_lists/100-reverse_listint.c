#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to pointer of type struct
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = *head;
	listint_t *temp;

	if (*head == NULL)
		return (NULL);
	if (prev_node->next == NULL)
		return (prev_node);

	*head = NULL;
	while (prev_node != NULL)
	{
		temp = prev_node->next;
		prev_node->next = *head;
		*head = prev_node;
		prev_node = temp;
	}
	return (*head);
}
