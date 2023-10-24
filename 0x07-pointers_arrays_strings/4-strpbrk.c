#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - This funciton Searches for a string of any set of bytes.
 * @s: type char pointer
 * @accept: type char pointer
 * Return: s or null
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;
	char *p;

	a = 0;
	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (accept[b] == s[a])
			{
				p = &s[a];
				return (p);
			}
			b++;
		}
		a++;
	}
	return (NULL);
}
