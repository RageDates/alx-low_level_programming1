#include "lists.h"

/**
 * listint_len - prints the number of elements in a listint_t list.
 * @h: Pointer to the head
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}
	return (node_count);
}
