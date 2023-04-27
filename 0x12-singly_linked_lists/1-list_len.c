#include "lists.h"

/**
  * list_len - function to get all the linked list nodes
  * Return: the number of nodes in the linked list
  * @h: a pointer to the head of the linked list
  */
size_t list_len(const list_t *h)
{
	unsigned int i;

	i = 0;

	while (h != NULL)
	{
		h = h->next;

		i++;
	}
	return (i);
}
