#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that print a number followed by a new line
 *
 * @separator: strings to be printed in between the numbers
 * @n: number of args passed
 *
 * Return: End the program
 */
void print_numbers(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				if (separator != NULL)
				printf("%d%s", va_arg(params, int), separator);
				else
					printf("%d", va_arg(params, int));
			}
			else
			{
				printf("%d", va_arg(params, int));
			}
		}
	}
	printf("\n");
	va_end(params);
}
