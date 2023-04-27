#include "lists.h"

/**
 *add_node_end - Adds a new node at the end of a linked list
 *@head: pointer to the head of the list
 *@str: string to be added to the list
 *Return: ptr to the last node or NULL in case of failure
*/

list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	int i;
	list_t *temp0, *temp1;

	temp0 = malloc(sizeof(list_t));
	if (temp0 == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(temp0);
		return (NULL);
	}
	else
		s = strdup(str);

	for (i = 0; str[i];)
		i++;

	temp0->str = s;
	temp0->len = i;
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
	return (*head);
}
