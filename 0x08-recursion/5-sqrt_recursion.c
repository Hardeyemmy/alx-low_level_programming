#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - function that returns the natural square root
 *
 * @n: integer parameter n
 *
 * Return: End the program
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
int _sqrt(int n, int i)
{
	int sqrt = i * i ;

		if (sqrt < 1)
		{
		return (-1);
		}
	if (sqrt == n)
	{
	return (i);
	}
	return (_sqrt(n, i + 1));
}
