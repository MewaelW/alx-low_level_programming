#include <stdio.h>

/**
 * main - this is a program that prints the alphabet in lowercase and then
 * in uppercase
 *
 * Description: Prints the alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char lowercase;
	char uppercase;


	lowercase = 'a';
	uppercase = 'A';

	while (lowercase <= 'z')
		putchar(lowercase), lowercase++;
	while (uppercase <= 'Z')
		putchar(uppercase), uppercase++;

	putchar('\n');

	return (0);
}
