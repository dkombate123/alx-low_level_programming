#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - check the code
 *@head:vari
 *
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		listint_t *next = current->next;

		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
