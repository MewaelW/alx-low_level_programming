#include "lists.h"

/**
 * add_nodeint_end - This program adds a new node at the end of a list
 *
 * @head: pointer to the first element
 * @n: data to insert
 * Return: pointer to the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = node;

	return (node);
}
