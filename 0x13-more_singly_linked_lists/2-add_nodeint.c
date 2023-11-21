#include "lists.h"

/**
 * add_nodeint - This program adds a new node at the beginning of a list
 *
 * @head: pointer to the first node
 * @n: data to insert
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
