#include "main.h"
/**
 * _strncpy - copies a string
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
		len++;
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[i] = src[i];
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

