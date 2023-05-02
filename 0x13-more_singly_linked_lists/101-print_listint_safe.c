#include "lists.h"
#include <stdlib.h>
/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *new = head->next, *old;
	size_t num = 1;

	if (head == NULL || new == NULL)
		return (0);
	old = (head->next)->next;

	while (old)
	{
		if (new == old)
		{
			new = head;
			while (new != old)
			{
				num++;
				new = new->next;
				old = old->next;
			}
			new = new->next;
			while (new != old)
			{
				num++;
				new = new->next;
			}
			return (num);
		}
		new = new->next;
		old = (old->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to a struct
 * Return: the number of nodes in the list, and
 * If the function fails, exit the program with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t num_of_nodes, i;

	num_of_nodes = looped_listint_len(head);
	if (num_of_nodes == 0)
	{
		for (; head != NULL; num_of_nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < num_of_nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
		exit(98);
	}
	return (num_of_nodes);
}
