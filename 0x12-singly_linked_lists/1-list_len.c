#include "lists.h"

/**
 * list_len - returns the number of elements in the linked list
 * @h:head
 * Return:number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *p = h;
	int n;

	while (p)
	{
		p = p->next;
		n++;
	}
	return (n);
}
