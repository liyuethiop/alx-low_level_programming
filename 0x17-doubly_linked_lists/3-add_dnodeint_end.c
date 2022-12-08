#include "lists.h"
/**
 * add_dnodeint_end - adds node at the end
 * @head:head
 * @n: the value to add
 * Return:address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	temp = *head;
	if (!*head || !new)
		return (NULL);
	if (*head)
	{
		while (temp->next)
			temp = temp->next;
		new->n = n;
		temp->next = new;
		new->prev = temp;
		new->next = NULL;
	}
	else
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	return (new);
}
