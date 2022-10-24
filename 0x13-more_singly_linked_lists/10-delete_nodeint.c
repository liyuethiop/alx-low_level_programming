#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head:head
 * @index:the index
 * Return:1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t = *head, *del;
	unsigned int i;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		t->next = NULL;
		free(t);
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
			t = t->next;
		if (t)
		{
			del = t->next;
			t->next = t->next->next;
			free(del);
		}
		else
			return (-1);
	}
	return (1);
}
