#include "lists.h"

/**
  * listint_len - function to return the number of the nodes
  * Return: the number of nodes in the linked list
  * @h: a pointer to the head of the linked list
  */
size_t listint_len(const listint_t *h)
{
	size_t i;

	i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
