#include "lists.h"
/**
 * get_nodeint_at_index - return nth node of list
 * @head:head
 * @index:the nth node
 * Return: the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *t = head;
	unsigned int i;

	if (t)
	{
		for (i = 0; i < index; i++)
			t = t->next;
		return (t);
	}
	else
		return (NULL);
}
