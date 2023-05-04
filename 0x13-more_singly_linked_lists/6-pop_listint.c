#include "lists.h"

/**
  *pop_listint - function to delete first element from a linked list
  *Return: the value of the node or 0 if the list is empty
  *@head: the head of the linked list
  */
int pop_listint(listint_t **head)
{
	int i;
	listint_t *temp = (*head)->next;

	if (head == NULL)
		return (0);
	i = (*head)->n;

	free(*head);
	*head = temp;

	return (i);
}
