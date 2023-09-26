#include "lists.h"

/**
  * free_listint2 - function that frees a listint_t list
  * @head: pointer to memory of the head node
  *
  */
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (*head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
	 *head = NULL;
	}
}
