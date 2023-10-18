#include "main.h"
/**
 * *_strncat - concatenates two strings but src uses at most n number og bytes
 *
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * return: dest after concatenation
 */
 char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int len = 0;

	while (dest[i] != 0)
	{
		i++;
		len++;
	}
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return dest;
}
