#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - THis function sets the value of a bit to 0 at an index
 *
 * @n: parameter
 * @index: index
 * Return: 1 Success, -1  error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
