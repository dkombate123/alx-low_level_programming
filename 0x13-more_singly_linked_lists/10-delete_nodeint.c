#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - check the code
 *@head:vari
 *@index:vare
 *
 * Return: Always 0.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	 listint_t *current = *head;
	 listint_t *previous = NULL;
	 unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		listint_t *temp = *head;

		*head = (*head)->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index && current != NULL; i++)
	{
		previous = current;
		current = current->next;
	}
	if (current == NULL || i < index)
	{
		return (-1);
	}
	previous->next = current->next;
	free(current);
	return (1);
}
