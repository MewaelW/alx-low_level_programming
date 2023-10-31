#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *
 * @str: string to be copied
 * Return: pointer
 */
char *_strdup(char *str)
{
	char *ptr;
	int i = 0;
	int j;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;
	ptr = malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		ptr[j] = str[j];
	}
	return (ptr);

	free(ptr);
}
