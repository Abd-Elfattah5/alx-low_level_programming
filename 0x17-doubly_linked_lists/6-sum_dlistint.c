#include "lists.h"
/**
 * sum_dlistint - adding all list nodes
 * Return: the sum of all list
 * @head: the head of the list
*/
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (result);

	temp = head;
	while (temp != NULL)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}
