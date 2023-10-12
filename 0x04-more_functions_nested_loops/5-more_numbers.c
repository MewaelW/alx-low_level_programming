#include "main.h"
/**
 * more_numbers - this function prints numbers 0 to 14 ten times!
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			if (j < 15)
			{
				_putchar('0' + (j % 10));
			}
		}
		_putchar('\n');
	}
}
