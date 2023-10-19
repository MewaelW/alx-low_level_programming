#include "main.h"
/**
 * cap_string: capitalizes all words in a string
 *
 * @s: string
 * Return: string s
 */
char *cap_string(char *str)
{
	int x;
	int i;
        int y;
	char sym[] = "\n?,;.!(){}\t\" ";

	for (x = 0, i = 0; str[x] != '\0'; x++)
	{
		if (str[0] > 96 && str[0] < 123)
			i = 1;
		for (y = 0; sym[y] != '\0'; y++)
		{
			if (sym[y] == str[x])
				i = 1;
		}

		if (i)
		{
			if (str[x] > 96 && str[x] < 123)
			{
				str[x] = str[x] - 32;
				i = 0;
			}
			else if (str[x] > 64 && str[x] < 91)
				i = 0;
			else if (str[x] > 47 && str[x] < 58)
				i = 0;
		}
	}
	return (str);
}
