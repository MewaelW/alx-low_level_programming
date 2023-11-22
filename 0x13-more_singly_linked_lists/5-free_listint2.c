#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - This program frees a list
 *
 * @head: Address of the first node
 **/

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}
}
