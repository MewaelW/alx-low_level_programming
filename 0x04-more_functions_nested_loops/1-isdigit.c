#include "main.h"
/**
 * _isdigit - is a function that checks for a digit
 * @c: is an integer to be checked
 *
 * Return: 1 if it is a digit and 0 if it is not.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	return (0);
}
