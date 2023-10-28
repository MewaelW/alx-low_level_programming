#include <stdio.h>
/**
 * main -This function prints all arguments received
 *
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
