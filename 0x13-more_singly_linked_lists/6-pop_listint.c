#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: Pointer to pointer of type struct
 * Return: head node's data or 0 if failure.
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n;

	if (*head != NULL)
	{
		*head = (*(head))->next;

		n = temp->n;
		free(temp);
		return (n);
	}
	return (0);
}
