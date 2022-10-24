#include "lists.h"
/**
 * free_listint - frees a list
 * @head:head
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head;
		head = head->next;
		free(t);
	}
}
