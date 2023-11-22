#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - this function frees a list
 *
 * @head: Address of the first node
 **/

void free_listint(listint_t *head)
{
	listint_t *p, *pp;

	p = head;
	while (p != NULL)
	{
		pp = p->next;
		free(p);
		p = pp;
	}
}
