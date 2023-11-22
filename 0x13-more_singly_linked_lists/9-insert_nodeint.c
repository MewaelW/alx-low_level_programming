#include "lists.h"
/**
 * insert_nodeint_at_index -This function inserts a new node in a linked list
 *
 * @head: pointer to the first node
 * @idx: index
 * @n: new data
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *nn;
	listint_t *p = *head;

	nn = malloc(sizeof(listint_t));
	if (!nn || !head)
		return (NULL);

	nn->n = n;
	nn->next = NULL;

	if (idx == 0)
	{
		nn->next = *head;
		*head = nn;
		return (nn);
	}

	for (i = 0; p && i < idx; i++)
	{
		if (i == idx - 1)
		{
			nn->next = p->next;
			p->next = nn;
			return (nn);
		}
		else
			p = p->next;
	}

	return (NULL);
}
