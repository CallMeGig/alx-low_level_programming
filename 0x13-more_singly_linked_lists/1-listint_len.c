#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: list
 * Return: Number of nodes in a list
 */

size_t listint_len(const listint_t *h)
{
	size_t tot_node = 0;

	while (h != NULL)
	{
		tot_node++;
		h = h->next;
	}

	return (tot_node);
}
