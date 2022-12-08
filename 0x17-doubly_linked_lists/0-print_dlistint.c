#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dlistint - prints doubly linked list
 * @h: head
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = malloc(sizeof(dlistint_t));
	int no = 0;

	temp = h;
	while (temp != NULL)
	{
		no++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (no);
}
