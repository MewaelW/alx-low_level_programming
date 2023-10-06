#include <stdio.h>
/**
 * main - this rpogram prints the whole alphabet except for the letters q and e
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
