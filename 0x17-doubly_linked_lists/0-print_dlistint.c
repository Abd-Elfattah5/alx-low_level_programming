#include "lists.h"
/**
 * print_dlistint - printing a doubly linked list
 * Return: the number of nodes
 * @h: the head of the linked list*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	size_t nodes = 0;
	
	if (h == NULL || *h == NULL)
		return (0);
	temp = *h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		nodes += 1;
		temp = temp->next;
	}
	return (nodes);
}
