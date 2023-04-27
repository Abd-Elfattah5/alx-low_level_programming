#include "lists.h"
/**
  *add_node - function to add a node to a linked list
  *Return: a pointer to the new node created or NULL if flailed
  *@head: a pointer to the place where the head is created
  *@str: the value of the node
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i;
	list_t *temp_node;

	i = 0;
	temp_node = malloc(sizeof(list_t));

	if ( head == NULL || temp_node == NULL)
		return (NULL);
	temp_node->str = strdup(str);
	while (*(str++) != '\0')
		i++;
	temp_node->len = i;
	temp_node->next = *head;
	*head = temp_node;
	return (temp_node);

}
