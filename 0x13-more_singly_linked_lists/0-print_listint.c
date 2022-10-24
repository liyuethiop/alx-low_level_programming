#include "lists.h"
/**
 * print_listint - prints the linked list
 * @h: head
 * Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *t = h;
	int n = 0;

	while (t)
	{
		printf("%d\n", t->n);
		t = t->next;
		n++;
	}
	return (n);
}
