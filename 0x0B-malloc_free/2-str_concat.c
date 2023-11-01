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
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int z = 0;
	unsigned int y = 0;
	char *ptr;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	ptr = malloc(sizeof(char) * (i + j + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[z] != '\0')
	{
		ptr[z] = s1[z];
		z++;
	}
	while (s2[y] != '\0')
	{
		ptr[z + y] = s2[y];
		y++;

	}
	ptr[z + y] = '\0';


	return (ptr);
}
