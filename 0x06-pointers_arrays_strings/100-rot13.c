#include "main.h"
/**
 * rot13 - this program encodes a string into rot13
 *
 * @str: string
 * Return: pointer to a string
 */
char *rot13(char *str)
{
	int i, j;

	char a[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char b[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a[j] != '\0' ; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
		}
	}
	return (str);
}
