#include "variadic_functions.h"
/**
 * print_numbers - function that print a number 
 *
 * @separator: pointer parameter to the function
 * @n: num of args
 *
 * Return: End the program
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argument1;
	unsigned int i;

	va_start(argument1, n);
	if (n != 0)
	{
		for (i = 0; (i < n - 1); i++)
		{
			if (separator != NULL)
			{
		printf("%d%s", va_arg(argument1, int), separator);
			}
			else
			{
				printf("%d", va_arg(argument1, int));
			}
		}
		printf("%d", va_arg(argument1, int));
		va_end(argument1);
	}
	printf("\n");
}
