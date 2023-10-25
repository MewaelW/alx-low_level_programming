#include "main.h"
/**
 * test - checks if number is prime
 *
 * @i: int
 * @j: int
 * Return: int
 */
int test(int i, int j)
{
	if (j < 2 || j % i == 0)
		return (0);
	else if (i > j / 2)
		return (1);
	else
		return (test(i + 1, j));
}
/**
 * is_prime_number -  returns 1 if the input integer is
 * a prime number, otherwise return 0
 *
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (test(2, n));
}
