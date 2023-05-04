#include "lists.h"

/**
  * print_listint - function to print all the linked list
  * Return: the number of nodes in the linked list
  * @h: a pointer to the head of the linked list
  */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i += 1;
	}
	return (i);
}
