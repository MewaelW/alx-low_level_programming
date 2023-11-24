#include "main.h"

/**
 * binary_to_uint - This function converts a binary number to an unsigned int
 *
 * @b: A pointer to a string of 0 and 1 chars.
 * Return: If b is NULL or contains chars not 0 or 1 - 0.
 *
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int size = 0;

	if (b[size] == '\0')
		return (0);

	while ((b[size] == '0') || (b[size] == '1'))
	{
		num <<= 1;
		num += b[size] - '0';
		size++;
	}

	return (num);
}
