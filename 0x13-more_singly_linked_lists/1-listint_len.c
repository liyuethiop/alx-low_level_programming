#include "lists.h"
/**
 * listint_len - return number of elements
 * @h: head
 * Return:number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	int n = 0;

	while (temp)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
