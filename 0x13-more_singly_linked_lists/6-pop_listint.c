#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint- check the code
 *@head:vari
 *
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

	if (*head == NULL)
	{
		return (0);
	}

	data = (*head)->n;

	*head = (*head)->next;
	free(temp);
	return (data);
}
