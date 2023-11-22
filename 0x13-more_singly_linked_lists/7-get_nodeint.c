#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - This function finsd the node at position index
 *
 * @head: Address of the first node
 * @index: Position of a the node
 * Return: Pointer
 **/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
