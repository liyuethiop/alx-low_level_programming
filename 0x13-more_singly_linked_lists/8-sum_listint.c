#include "lists.h"
/**
 * sum_listint - returns the sum of all the data
 * @head:head
 * Return:the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *t = head;
	int sum = 0;

	if (!head)
		return (0);
	while (t)
	{
		sum += t->n;
		t = t->next;
	}
	return (sum);
}
