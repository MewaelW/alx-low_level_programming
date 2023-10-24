#include "main.h"
#include <stdio.h>
/**
 * _strstr - This function locates a substring
 * @haystack: type char str
 * @needle: type char sub str
 * Return: haystack or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *all = haystack;
		char *p = needle;

		while (*p == *haystack && *p != '\0' && *haystack != '\0')
		{
			haystack++;
			p++;
		}
		if (*p == '\0')
			return (all);
		haystack = all + 1;
	}
	return (NULL);
}
