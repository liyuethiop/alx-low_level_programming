#include "lists.h"
/**
 * add_nodeint_end - add new node at the end
 * @head: head
 * @n: new value
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (p == NULL)
		*head = new;
	else
	{
		while (p->next)
		p = p->next;
		p->next = new;
	}
	return (new);
}
