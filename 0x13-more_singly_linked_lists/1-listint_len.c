#include "lists.h"

/**
 * listint_len - returns the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nn = 0; /* nn = numbers of nodes */

	while (h != NULL)
	{
		h = h->next;
		nn++;
	}
	return (nn);
}
