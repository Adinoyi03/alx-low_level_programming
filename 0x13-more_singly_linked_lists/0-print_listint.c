#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nn = 0;/* nn = numbers of nodes */

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nn++;
	}
	return (nn);
}
