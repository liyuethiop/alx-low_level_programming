#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * dlistint_len - prints doubly linked list node
 * @h: head
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = malloc(sizeof(dlistint_t));
	int no = 0;

	temp = h;
	while (temp != NULL)
	{
		no++;
		temp = temp->next;
	}
	return (no);
}
