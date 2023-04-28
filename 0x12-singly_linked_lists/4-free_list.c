#include "lists.h"
/**
  *free_list - function to free the whole space of linked list
  *Return: void
  *@head: a pointer to the head of the linked list
  */
void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
		return;
	temp = head;

	while (temp->next)
	{
		temp = temp->next;
		free(head->str);
		free(head);
		head = temp;
	}
	free(head->str);
	free(head);
}
