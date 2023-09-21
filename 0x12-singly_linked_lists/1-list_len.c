#include "lists.h"

/**
  * list_len - prints number of elements in a linked list_t list
  * @h: struct pointer list to be printed
  * Return: the number of nodes
  */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}

	return (nodeCount);
}
