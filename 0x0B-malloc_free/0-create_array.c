#include "main.h"
#include <stdlib.h>
/**
 * create_array - this creates an array of chars and initializes it
 * with a specific char
 *
 * @size: size of the array
 * @c: initialized char
 * Return: pointer(success), NULL(failure)
 */
char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int i;

	chr = malloc(sizeof(c) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (chr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		chr[i] = c;
	}

	return (chr);
	free(chr);
}
