#include "lists.h"
/**
  *free_listint - function to free the whole space of linked list
  *Return: void
  *@head: a pointer to the head of the linked list
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	temp = head;

	while (temp->next)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
	free(head);
}
