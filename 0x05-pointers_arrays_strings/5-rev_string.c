#include "main.h"
/**
* rev_string - reverses a string
*
* @s: string to be reversed
* Return: 0
*/
void rev_string(char *s)
{
	int a, b, c;
	char i;

	a = 0;
	b = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	c = a - 1;

	for (b = 0; b < a / 2; b++)
	{
		i = s[b];
		s[b] = s[c];
		s[c--] = i;
	}
}
