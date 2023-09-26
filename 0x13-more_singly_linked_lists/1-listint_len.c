#include "lists.h"

/**
  * listint_len - function that returns the number of elements in a linked list
  * @h: head node
  *
  * Return: number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	return (len);
}
