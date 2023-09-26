#include "lists.h"

/**
  * add_nodeint_end - adds a new node at the end of a listint_t lis
  * @head: pointer to memory of head node
  * @n: data for new node
  *
  * Return: address of the new element, or NULL if it failed
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}
	return (new_node);
}
