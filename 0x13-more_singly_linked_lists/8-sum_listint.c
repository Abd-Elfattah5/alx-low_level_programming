#include "lists.h"

/**
  * sum_listint - a function to return the sum of all list nodes
  * Return: the sum of all nodes or 0 if the list is empty
  *@head: the start of the list
  */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
