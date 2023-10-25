#include "main.h"

/**
 * _sqrt_recursion - This main function returns
 * the natural square root of a number.
 *
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - _sqrt_recursion
 * @n: int
 * @i: int
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if ((i * i) > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
