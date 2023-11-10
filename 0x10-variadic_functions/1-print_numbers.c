#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers -This function prints numbers & new line at the end
 *
 * @separator: string
 * @n: number of elements
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list a;
unsigned int i;

va_start(a, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(a, int));

if (separator != NULL && i != (n - 1))
{
printf("%s", separator);
}
}
putchar('\n');
va_end(a);
}
