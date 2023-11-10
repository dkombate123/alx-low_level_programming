#include <stdio.h>
#include "lists.h"
/**
 * print_listint - check the code
 * @h:var
 *
 * Return: return value
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
