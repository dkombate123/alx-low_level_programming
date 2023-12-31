
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *list_len - check the code
 *@h:var
 *
 *Return: Always 0.
 */
size_t list_len(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
