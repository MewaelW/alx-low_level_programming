#include "main.h"
/**
 * _strlen - this returns the length of a string
 *
 * @s: string
 * return: size if string
 */
int _strlen(char *s)
{
	int size;

	size = 0;

	while (s[size] != '\0')
	{
		size++;
	}
	return (size);
}
