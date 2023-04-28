#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int str_len(const char *str);

/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: Pointer to pointer of a list
 * @str: String
 * Return: the address of the new element,
 * or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	new->len = str_len(str);

	new->next = *head;

	*head = new;

	return (new);
}

/**
 * str_len - returns the length of a string
 * @str: String
 * Return: the resulting length
 */
int str_len(const char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}
