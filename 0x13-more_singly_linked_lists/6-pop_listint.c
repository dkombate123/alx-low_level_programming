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
	if (*head == NULL)
	{
		return (0);
	}
	int data = (*head)->n;
	listint_t *temp = *head;

	*head = (*head)->next;
	free(temp);
	return (data);
}
