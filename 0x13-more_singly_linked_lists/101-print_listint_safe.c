#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - check the code
 *@head:vari
 *
 * Return: Always 0.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t node_count = 0;

	slow_ptr = head;
	fast_ptr = head;
	while (slow_ptr != NULL && fast_ptr != NULL && fast_ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow_ptr, slow_ptr->n);
		node_count++;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next->next;
		if (slow_ptr == fast_ptr)
		{
			printf("-> [%p] %d\n", (void *)slow_ptr, slow_ptr->n);
			exit(98);
		}
	}
	return (node_count);
}

