#include "main.h"
/**
 * print_alphabet - this function prints the alphabet on lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
