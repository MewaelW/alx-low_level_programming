#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - this function concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 *@n: number of bytes of s2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int size = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		size++;

	ptr = malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
		return (NULL);

	size = 0;

	for (i = 0; s1[i]; i++)
		ptr[size++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		ptr[size++] = s2[i];

	ptr[size] = '\0';

	return (ptr);
}
