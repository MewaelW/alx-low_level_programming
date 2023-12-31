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
		for (n = a / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);
		}
	}
	else if (a % 2)
	{
		for (n = (a - 1) / 2; n < a - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
