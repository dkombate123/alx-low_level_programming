#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2- check the code
 *@head:vari
 *
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *current;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
	*head = NULL;
}
