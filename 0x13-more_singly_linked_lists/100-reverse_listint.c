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

	while (*head != NULL)
	{
		listint_t *next = (*head)->next;

		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
