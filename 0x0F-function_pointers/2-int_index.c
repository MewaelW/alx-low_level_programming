#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - A function that searches for an integer
 *
 * @array: Type int array pointer
 * @size: Type pointer to the size of the array
 * @cmp: Type pointer to the function to compare values
 * Return: return -1 if size <= 0 or elem no matches -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(*(array + i)))
			return (i);
	}
	return (-1);
}
