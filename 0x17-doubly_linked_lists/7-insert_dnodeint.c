#include "lists.h"

/**
 * insert_dnodeint_at_index - inserting a node at index
 * Return: the node or NULL if fails
 * @h: the head of the list
 * @idx: the idx to input
 * @n: the node value
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new = NULL;
	unsigned int count = 0;

	if (h == NULL || *h == NULL)
		return (NULL);
	temp = *h;

	if (!idx)
		return (add_dnodeint(h, n));
	while (temp != NULL)
	{
		if (count == idx)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));

			new = malloc(sizeof(dlistint_t));

			if (new != NULL)
			{
				new->n = n;
				new->next = temp;
				new->prev = temp->prev;
				temp->prev->next = new;
				temp->prev = new;
			}
			break;
		}
		temp = temp->next;
		count++;
	}
	return (new);
}
