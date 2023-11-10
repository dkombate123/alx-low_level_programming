#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - check the code
 *@h:vari
 *
 * Return: Always 0.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		size++;
		current = next_node;
	}
	*h = NULL;
	return (size);
}
