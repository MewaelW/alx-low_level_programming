#include "main.h"
/**
 * _atoi - this function converts strings into integers
 *
 * @s: string to be converted
 * Return: int
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	do {
		if (*s == '-')
			sign = sign * -1;
		else if (*s >= '0' && *s <= '9')
			result = (result * 10) + (*s - '0');
		else if (result > 0)
			break;
	} while (*s++);

	return (result * sign);
}
