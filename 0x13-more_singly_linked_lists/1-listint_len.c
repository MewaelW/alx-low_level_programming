#include "lists.h"

/**
 * listint_len - This function returns the number of elements in listint_t list
 *
 * @h: linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
