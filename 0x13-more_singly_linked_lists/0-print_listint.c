#include "lists.h"

/**
  * print_listint - function to print all the linked list
  * Return: the number of nodes in the linked list
  * @h: a pointer to the head of the linked list
  */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	i = 0;

	while (h != NULL)
	{
		printf("%d \n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
