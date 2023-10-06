#include <stdio.h>

/**
 * main - this is a program that prints the alphabet in lowercase.
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
		putchar(letter), letter++;
	putchar('\n');

	return (0);
}
