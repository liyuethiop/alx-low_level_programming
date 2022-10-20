#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: head
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p = h;
	int n = 0;

	while (p != NULL)
	{
		printf("[%u] %s\n", p->len, p->str);
		p = p->next;
		n++;
	}
	return (n);
}
