#include <unistd.h>
/**
 * _putchar - this function writes the character a to the output
 *
 * Return: 1 if successful 
 * on error return -1
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
