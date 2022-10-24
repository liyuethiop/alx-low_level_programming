#include "lists.h"
/**
 * pop_listint - deletes the head node of the list
 * @head:head
 * Return: the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *t = *head;

	if (*head == NULL)
		return (0);
	*head = (*head)->next;
	return (t->n);
}
