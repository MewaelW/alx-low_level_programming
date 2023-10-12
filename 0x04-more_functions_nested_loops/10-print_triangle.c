#include "main.h"
/**
 * print_triangle - this function prints a triangle using a '#' symbol
 *
 * @size: size of the triangle
 * return: 0
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - i); j++)
			putchar(' ');
		for (j--; j < size; j++)
			putchar('#');
		if (i < (size - 1))
			putchar('\n');
	}
	putchar('\n');
}
