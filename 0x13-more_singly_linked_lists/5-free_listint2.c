#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to pointer of type struct.
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *cleanup;

	if (head == NULL || *head == NULL)
		return;

	while (*head != NULL)
	{
		cleanup = *head;
		*head = (*(head))->next;
		free(cleanup);
	}
	*head = NULL;
}
