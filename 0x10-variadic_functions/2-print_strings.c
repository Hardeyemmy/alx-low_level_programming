#include "variadic_functions.h"
/**
 * print_strings - function that print strings followed by a new line
 *
 * @separator: string to be printed between strings
 * @n: num of args passed
 *
 * Return: End the program
 */
void print_strings(const char *separator, const unsigned int n, ...)
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
		printf("%s%s", make_nil(va_arg(params, char *)), separator);
				else
				printf("%s", make_nil(va_arg(params, char *)));
			}
			else
			{
				printf("%s", make_nil(va_arg(params, char *)));
				
			}
		}
	}
	printf("\n");
	va_end(params);
}
/**
 * make_nil - change s to nil if s is null
 *
 * @s: strng to be used
 *
 * Return: end the program
 */
char *make_nil(char *s)
{
	if (s == NULL)
		s = "(nil)";

	return (s);
}
