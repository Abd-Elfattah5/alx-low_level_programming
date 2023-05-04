#include "lists.h"

/**
  *delete_nodeint_at_index - a function to delete a node at an index of a list
  *Return: 1 at success and -1 at failure
  *@head: the start of the list
  *@index: the index of to insert in
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *next;

	if (!*head)
		return (-1);
	prev = *head;

	if (index == 0)
	{
		next = prev->next;
		free(prev);
		*head = next;
	}
	else
	{
		while (--index && prev)
			prev = prev->next;

		if (index == 0)
		{
			next = prev->next->next;
			free(prev->next);
			prev->next = next;
		}
		else
			return (-1);
	}
	return (1);
}
