#include "lists.h"

/*
 * print_listint - prints all elements of a list
 * @h: list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t tot_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);

		tot_nodes++;
		h = h->next;
	}

	return (tot_nodes);
}
