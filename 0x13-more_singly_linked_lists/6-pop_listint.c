#include "lists.h"

/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head: head node
  *
  * Return: head node's data or 0 if list is empty
  */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
