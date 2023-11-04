#include "main.h"
#include <stdlib.h>
/**
 * _realloc - this function reallocates a memory block by using malloc and free
 *
 * @ptr: poointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: new size of the new memory block
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *pp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	pp = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = pp[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = pp[i];
	}

	free(ptr);
	return (p);
}
