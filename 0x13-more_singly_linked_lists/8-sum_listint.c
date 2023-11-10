#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint- check the code
 *@head:vari
 *
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
