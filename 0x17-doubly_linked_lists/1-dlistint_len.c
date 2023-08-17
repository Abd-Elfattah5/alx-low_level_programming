#include "lists.h"
/**
 * dlistint_len - know the number of elements in list
 * Return: the number of nodes
 * @h: the head of the linked list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		nodes += 1;
		h = h->next;
	}
	nodes += 1;

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	return (nodes);
}
