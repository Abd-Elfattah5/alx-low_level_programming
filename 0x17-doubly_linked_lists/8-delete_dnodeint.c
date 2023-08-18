#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index
 * Return: 1 if success and -1 if failed
 * @head: the head of the list
 * @index: the node index to delete
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	while (temp != NULL)
	{
		if (!index)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		if (temp->next == NULL && count == index)
		{
			temp->prev->next = NULL;
			free(temp);
			return (1);
		}
		if (count == index)
		{
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		temp = temp->next;
		count++;
	}
	return (-1);
}
