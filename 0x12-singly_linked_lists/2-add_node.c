#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - THis function adds a new node at the end of a list_t list
 *
 * @head: double pointer to the list_t
 * @str: new string to the node
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nod;
	unsigned int len = 0;

	while (str[len])
		len++;

	nod = malloc(sizeof(list_t));
	if (!nod)
		return (NULL);

	nod->str = strdup(str);
	nod->len = len;
	nod->next = (*head);
	(*head) = nod;

	return (*head);
}
