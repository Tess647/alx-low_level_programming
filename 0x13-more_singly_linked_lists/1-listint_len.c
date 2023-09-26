#include "main.h"

/**
  * listint_len - function that returns the number of elements in a linked list
  * @h: head node
  *
  * Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	listint_t *current;
	size_t len = 0;

	current = h;
	while (current != NULL)
	{
		len++;
		current = current->next;
	}

	return (len);
}
