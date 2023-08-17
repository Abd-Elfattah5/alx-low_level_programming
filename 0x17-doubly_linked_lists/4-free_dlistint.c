#include "lists.h"
/**
 * free_dlistint - free a linked list
 * Return: void
 * @head: the head of the linked list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	temp = head;

	while (head != NULL)
	{
		head = head->next;
		free(temp);
		temp = head;
	}
}
