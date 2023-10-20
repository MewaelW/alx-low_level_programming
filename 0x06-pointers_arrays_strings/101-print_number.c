#include "main.h"
/**
 * print_number - this function prints an integer
 *
 * @n: integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i = i * -1;
	}

	if ((i / 10) > 0)
		print_number(i / 10);

	_putchar((i % 10) + '0');
}
