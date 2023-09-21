#include "lists.h"

/**
  * add_node - function that adds a new node at the beginning of a list_t list
  * @head: first node pointer
  * @str: input string
  *
  * Return: address of the new element, or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new1 = malloc(sizeof(list_t));
	size_t n;

	for (n = 0; str[n]; n++)
		;
		new1->len = n;
		new1->next = *head;
		new1->str = strdup(str);
		*head = new1;

	if (head == NULL)
		return (NULL);
	else
		return (*head);
}
