#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - this function allocates memory using malloc
 *
 * @b: unsigned int
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(b));
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
