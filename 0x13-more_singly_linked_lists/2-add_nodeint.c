#include "lists.h"
/**
  *add_nodeint - function to add a node to a linked list
  *Return: a pointer to the new node created or NULL if flailed
  *@head: a pointer to the place where the head is created
  *@n: the value of the node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp_node;

	temp_node = malloc(sizeof(listint_t));

	if (head == NULL || temp_node == NULL)
		return (NULL);
	temp_node->n = n;
	temp_node->next = *head;
	*head = temp_node;
	return (temp_node);

}
