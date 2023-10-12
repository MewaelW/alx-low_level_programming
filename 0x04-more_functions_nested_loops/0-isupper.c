#include "main.h"
/**
 * _isupper - is a functions that checks whether or not a letter is uppercase
 *
 * @c: this is the character to be checked.
 * Return: 1 if successful, otherwise 0
 */
int _isupper(int c)
{

	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}

	return (0);
}
