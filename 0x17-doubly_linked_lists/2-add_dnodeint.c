#include "lists.h"
/**
 * add_dnodeint - adding a node in the beginning of a linked list
 * Return: the node address of NULL otherwise
 * @head: the head address
 * @n: the node number
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	if (head == NULL || *head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	temp = *head;
	temp->prev = new;
	new->next = temp;
	new->prev = NULL;
	*head = new;

	return (new);
}
