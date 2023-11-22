#include "lists.h"
#include "stdlib.h"
/**
 * pop_listint -This function pops the first element in a linked list
 *
 * @head: Pointer to a list
 * Return: int
 **/
int pop_listint(listint_t **head)
{
	listint_t *p;
	int popped;

	if (!(*head != NULL))
		return (0);

	p = *head;
	*head = p->next;
	popped = p->n;
	free(p);
	return (popped);
}
