#include "main.h"
/**
 * puts_half - prints half a string followed by a new line
 *
 * @str: A string, half of which is to be printed.
 * Return: 0
 */
void puts_half(char *str)
{
	int a, n;

	a = 0;
	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 0)
	{

		for (n = a / 2; n < a; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		for (n = (a - 1) / 2; n < a; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
