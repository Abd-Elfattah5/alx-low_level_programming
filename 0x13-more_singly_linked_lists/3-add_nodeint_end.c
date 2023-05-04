#include "lists.h"

/**
 *add_nodeint_end - Adds a new node at the end of a linked list
 *@head: pointer to the head of the list
 *@n: string to be added to the list
 *Return: ptr to the last node or NULL in case of failure
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp0, *temp1;

	temp0 = malloc(sizeof(listint_t));
	if (temp0 == NULL)
		return (NULL);

	temp0->n = n;
	temp0->next = NULL;

	if (*head == NULL)
		*head = temp0;
	else
	{
		temp1 = *head;
		while (temp1->next != NULL)
			temp1 = temp1->next;
		temp1->next = temp0;
	}
	return (temp0);
}
