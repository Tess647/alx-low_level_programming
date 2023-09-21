#include "lists.h"

/**
  * print_list - prints all the elements of a list_t list
  * @h: struct pointer list to be printed
  * Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		nodeCount++;
	}

	return (nodeCount);
}
