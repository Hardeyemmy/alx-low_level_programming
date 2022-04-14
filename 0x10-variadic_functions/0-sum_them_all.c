#include "variadic_function.h"
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

	va_start(params, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			sum += va_arg(params, n);
		}
	}
	va_end(params);
	return (sum);
}
