#include "main.h"
#include <stdlib.h>
/**
 * argstostr - this function  concatenates all the arguments of your program.
 *
 * @ac: number of arguments
 * @av: arguments array
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	int a;
	int b;
	int c;
	int length;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	length = 0;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
			length++;
		length++;
	}

	ptr = malloc(sizeof(char) * (length + 1));

	if (ptr == NULL)
		return (NULL);

	c = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			ptr[c] = av[a][b];
			c++;
		}
		ptr[c] = '\n';
		c++;
	}
	return (ptr);
}
