#include "lists.h"

/**
 * delete_nodeint_at_index -This program deletes a node in a linked list
 *
 * @head: pointer to the first element
 * @index: index of the node to delete
 * Return: 1 for success
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *node = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}

	while (i < index - 1)
	{
		if (!p || !(p->next))
			return (-1);
		p = p->next;
		i++;
	}

	node = p->next;
	p->next = node->next;
	free(node);

	return (1);
}
