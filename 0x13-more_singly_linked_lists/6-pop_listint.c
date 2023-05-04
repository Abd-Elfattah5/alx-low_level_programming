#include "lists.h"

/**
  *pop_listint - function to delete first element from a linked list
  *Return: the value of the node or 0 if the list is empty
  *@head: the head of the linked list
  */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp;

	if (!*head)
		return (0);

	temp = *head;
	i = temp->n;
	*head = (*head)->next;
	free(temp);

	return (i);
}
