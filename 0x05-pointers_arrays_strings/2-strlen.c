#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string index
 * Return: size of string
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
