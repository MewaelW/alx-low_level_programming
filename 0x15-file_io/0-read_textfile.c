#include "main.h"

/**
 * binary_to_uint - This function converts a binary number to an unsigned int
 *
 * @b: A pointer to a string.
 * Return: If b is NULL or contains chars not 0 or 1 - 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		a <<= 1;
		a += b[len] - '0';
		len++;
	}

	return (a);
}
