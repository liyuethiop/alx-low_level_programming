#include "lists.h"
/**
 * free_dlistint - frees lists
 * @head:head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
