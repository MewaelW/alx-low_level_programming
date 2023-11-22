#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - This function sums all the data in a list
 *
 * @head: Address of the first node
 * Return: Int
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
