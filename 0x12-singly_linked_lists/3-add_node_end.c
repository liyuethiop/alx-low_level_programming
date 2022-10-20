#include <stdlib.h>
#include "lists.h"
#include <string.h>


/**
 * add_node_end - adds a new node at the end
 * @head: pointer to head
 * @str: string to be added
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *p;
	int len = 0;

	new = malloc(sizeof(list_t));
	p = *head;
	if (new == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}

	return (new);
}
