#include "main.h"
#include <stdlib.h>
/**
 * _calloc - this function  allocates memory for an array, using malloc
 *
 * @nmemb: elements of array
 * @size: number of bytes
 * Return: o
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *p1;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	p1 = ptr;

	for (i = 0; i < (size * nmemb); i++)
		p1[i] = '\0';

	return (ptr);
}
