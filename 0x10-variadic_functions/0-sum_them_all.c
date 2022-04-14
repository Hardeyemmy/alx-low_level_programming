#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of its parameter
 *
 * @n: num of args
 *
 * Return: return int
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list params;

	va_start(params, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(params, int);
	}
	va_end(params);
	return (sum);
}
