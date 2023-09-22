#include "lists.h"

/**
  * add_node_end - function that adds a new node at the end of a list_t list
  * @head: pointer to the pointer of the head of the linked list
  * @str: string pointer to be printed
  *
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *linked_list_nodes;
	size_t n;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	node->len = n;
	/* node->next = NULL; */
	linked_list_nodes = *head;

	if (linked_list_nodes == NULL)
	{
		*head = node;
	}
	else
	{
		while (linked_list_nodes->next != NULL)
			linked_list_nodes = linked_list_nodes->next;
		linked_list_nodes->next = node;
	}

	return (*head);
}
