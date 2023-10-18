#include "main.h"
/**
 *  *_strcat - This function concatenates two strings together
 *
 * @dest: first string
 *  @src: second string
 *  Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i]; i++)
		dest[len++] = src[i];
	return (dest);
}
