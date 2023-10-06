#include <stdio.h>
/**
 * main - this program prints the alphabets in reverse order and lowercase
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	letter = 'z';
	while (letter >= 'a')
		putchar(letter), letter--;
	putchar('\n');

	return (0);
}

