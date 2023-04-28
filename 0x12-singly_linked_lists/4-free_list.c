#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees a list_t list.
 * @head: pointer to the list
 * Return: no return value
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);

		if (head->str)
			free(head->str);
		free(head);
	}
}
