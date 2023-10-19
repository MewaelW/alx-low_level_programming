#include "main.h"
/**
 * *leet - encodes a string into 1337
 *
 * @str: string
 * Return: string
 */
char *leet(char *str)
{
	int i;
	char *en = str;
	char a[] = { 'A', 'E', 'L', 'O', 'T' };
	char num[] = { 4, 3, 1, 0, 7 };

	while (*str)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] + 32)
			{
				*str = num[i] + '0';
			}
		}
		str++;
	}
	return (en);
}
