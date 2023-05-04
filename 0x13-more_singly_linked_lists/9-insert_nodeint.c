#include "lists.h"

/**
  *insert_nodeint_at_index - a insert a node at a certain index of a list
  *Return: the node or NULL if failed to insert
  *@head: the start of the list
  *@idx: the index of to insert in
  *@n: the value of the node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *node;

	if (!*head && idx != 0)
		return (NULL);
	temp = *head;

	node = malloc(sizeof(listint_t));
	node->n = n;

	if (idx == 0)
	{
		node->next = temp;
		*head = node;
	}
	else
	{
		while (--idx && temp)
			temp = temp->next;

		if (idx == 0)
		{
			node->next = temp->next;
			temp->next = node;
		}
		else
			return (NULL);
	}
	return (node);
}
