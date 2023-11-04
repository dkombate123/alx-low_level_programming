#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *print_list - check the code
 *@h:node
 *
 *Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		node_count++;
		h = h->next;
	}
	return (node_count);
}
