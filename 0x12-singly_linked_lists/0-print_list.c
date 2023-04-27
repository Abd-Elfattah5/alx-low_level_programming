#include "lists.h"

/**
  * print_list - function to print all the linked list
  * Return: the number of nodes in the linked list
  * @h: a pointer to the head of the linked list
  */
size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		i++;
	}
	return (i);
}
