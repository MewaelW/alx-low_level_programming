#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - This function prints anything.
 *
 * @format: a list of types of arguments passed to the function.
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	int index, findic;
	char *str;
	va_list my;

	index = 0;

	va_start(my, format);
	while (format != NULL && format[index] != '\0')
	{
		switch (format[index])
		{
			case 'i':
				printf("%i", va_arg(my, int));
				findic = 0;
				break;
			case 's':
				str = va_arg(my, char*);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				findic = 0;
				break;
			case 'c':
				printf("%c", va_arg(my, int));
				findic = 0;
				break;
			case 'f':
				printf("%f", va_arg(my, double));
				findic = 0;
				break;
			default:
				findic = 1;
				break;
		}
		if (findic == 0 && format[index + 1] != '\0')
			printf(", ");
		index++;
	}
	printf("\n");
	va_end(my);
}
