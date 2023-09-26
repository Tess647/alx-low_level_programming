#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list
  * @head: input argument
  * @index: index of the node
  * Return: nth node, if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}

	return (NULL);
}
