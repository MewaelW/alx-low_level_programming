#include "main.h"
#include <stdlib.h>

/**
 * set_bit -This function sets the value of a bit to 1 at an index
 *
 * @n: the value of bit set to 1
 * @index: position of the bit
 *
 * Return: 1 (success) -1 (error)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
