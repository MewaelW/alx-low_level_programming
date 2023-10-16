#include "main.h"
/**
 * puts2 - prints every other character on a string
 *
 * @str: string to be printed
 * Return: 0
 */
void puts2(char *str)
{
	int a, size;

	size = 0;
	while (str[size] != '\0')
	{
		size++;
	}
	for (a = 0; a < size; a += 2)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
