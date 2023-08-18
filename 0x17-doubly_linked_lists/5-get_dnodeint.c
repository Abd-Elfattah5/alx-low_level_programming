#include "lists.h"
/**
 * get_dnodeint_at_index - get a node at an index
 * Return: the node
 * @head: the list head
 * @index: the index of the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;

	if (!index)
		return (head);

	while (temp != NULL && count != index)
	{
		temp = temp->next;
		count++;
	}

	return (temp);
}
