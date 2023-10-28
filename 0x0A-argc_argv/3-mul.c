#include <stdlib.h>
#include <stdio.h>
/**
 *main - this function multiplies two numbers
 *
 *@argc: argument count
 *@argv: pointer to a string of args
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;

	printf("%d\n", res);
	return (0);
}
