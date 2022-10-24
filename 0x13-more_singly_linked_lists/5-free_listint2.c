#include "lists.h"
/**
 * free_listint2 - frees list
 * @head:head
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	while (*head)
	{
		t = *head;
		*head = (*head)->next;
		free(t);
	}
	*head = NULL;
}
