#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: number of integers
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int j = 0;
	int i = n - 1;
	int cp;

	for (j = 0; j < i; i--, j++)
	{
		cp = a[j];
		a[j] = a[i];
		a[i] = cp;
	}
}
