#include "main.h"
#include <stdlib.h>
/**
 * str_concat - this function concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr = NULL;
	unsigned int size;
	unsigned int i, j, z, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	size = i + j + 1;
	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (z = 0; z < i; z++)
	{
		ptr[z] = s1[z];
	}
	for (y = 0; y < j; z++, y++)
	{
		ptr[z] = s2[y];
	}
	ptr[size] = s2[y];
	return (ptr);
}
