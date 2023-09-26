#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer to the head node
 * @idx: index at which the new node should be added (starting at 0)
 * @n: data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int count;

	if (idx == 0)
	{
		return (add_nodeint(head, n));
	}

	for (count = 0; count < idx - 1; count++)
	{
		if (current == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}

	if (current != NULL)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}

		new_node->n = n;
		new_node->next = current->next;
		current->next = new_node;
		return (new_node);
	}

	return (NULL);
}

