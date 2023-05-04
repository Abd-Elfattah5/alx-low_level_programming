#include "lists.h"

/**
  *get_nodeint_at_index - function to return a node at a certain index
  *Return: a node or NULL if fails
  *@head: the start of the linked list
  *@index: the index of the node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	if (!head)
		return (NULL);

	temp = head;

	while (index != 0 && temp)
	{
		temp = temp->next;
		index--;
	}
	if (temp)
		return (temp);
	else
		return (NULL);
}
