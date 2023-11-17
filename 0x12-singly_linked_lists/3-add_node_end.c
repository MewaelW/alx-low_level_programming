#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - this function adds a new node at the end of a list_t list
 *
 * @head: double pointer to the list_t
 * @str: string
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_n;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_n = malloc(sizeof(list_t));
	if (!new_n)
		return (NULL);

	new_n->str = strdup(str);
	new_n->len = len;
	new_n->next = NULL;

	if (*head == NULL)
	{
		*head = new_n;
		return (new_n);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_n;

	return (new_n);
}
