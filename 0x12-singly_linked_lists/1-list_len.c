#include "lists.h"
#include <stdio.h>
/**
 * list_len - This function returns the number of elements in a linked
 * list_t list
 * @h: pointer to the list_t
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}
	return (l);
}
