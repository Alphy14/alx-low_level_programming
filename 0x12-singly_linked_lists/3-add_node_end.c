#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int str_len(const char *str);

/**
 * add_node_end - adds a new node
 * at the end of a list_t list.
 * @head: Pointer to pointer of the list
 * @str: The string
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *s;

	s = *head;

	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = str_len(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (s->next)
		s = s->next;
	s->next = new_node;

	return (new_node);
}

/**
 * str_len - returns the length of a string.
 * @str: The string
 * Return: The resulting length
 */
int str_len(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
