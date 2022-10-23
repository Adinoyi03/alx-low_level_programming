#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;/*pointer to the temporary node address*/
	listint_t *cur;/*pointer to the current node address*/

	if (head != NULL)
	{
		cur = *head;/*where cur = current*/
		while ((temp = cur) != NULL)
		{
			cur = cur->next;
			free(temp);
		}
		*head = NULL;
	}
}
