#include "lists.h"
/**
 * print_dlistint - printing a doubly linked list
 * Return: the number of nodes
 * @h: the head of the linked list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		nodes += 1;
		h = h->next;
	}
	printf("%d\n", h->n);
	nodes += 1;

	while (h->prev != NULL)
	{
		h = h->prev;
	}

	return (nodes);
}
