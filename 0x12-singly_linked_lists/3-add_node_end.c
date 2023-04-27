#include "lists.h"
/**
  *add_node_end - function to add a node to a linked list in the end
  *Return: a pointer to the new node created or NULL if flailed
  *@head: a pointer to the place where the head is created
  *@str: the value of the node
  */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *temp_node = malloc(sizeof(list_t));
	list_t *temp2_node = *head;

	if (head == NULL || temp_node == NULL)
	{
		free(temp_node);
		return (NULL);
	}
	if (str != NULL)
	{
		temp_node->str = strdup(str);
		if (temp_node->str == NULL)
		{
			free(temp_node);
			return (NULL);
		}

		while (*(str++) != '\0')
			i++;
		temp_node->len = i;
	}
	if (temp_node != NULL)
	{
		while (temp2_node->next != NULL)
			temp2_node = temp2_node->next;
		temp2_node->next = temp_node;
	}
	else
		*head = temp_node;

	return (temp_node);

}
