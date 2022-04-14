#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - function that return the sum of all its parameter
 *
 * @n: num of args passed
 *
 * Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list params;

	if (n)
	{
		va_start(params, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(params, int);
		}
		va_end(params);
	}
	return (sum);
}
