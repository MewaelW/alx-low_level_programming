#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - this function frees the dogs
 *
 * @d: to be freed
 * Return: 0
 *
 */
void free_dog(dog_t *d)
{
	free(d);
}

