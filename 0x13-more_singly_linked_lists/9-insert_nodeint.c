#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head:head
 * @idx:the index
 * Return:the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t = *head, *new;
	unsigned int i;

	if (!*head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < (idx - 1) && t->next; i++)
		t = t->next;
	if (idx < 0 || idx > i + 1)
		return (NULL);

	new->next = t->next;
	t->next = new;
	return (t);
}
