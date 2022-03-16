#include "main.h"
/**
 * main -sign of a number
 *
 * Return: print 1, 0 0r -1
 */
int print_sign(int c)
{
	int result;

	if (c > 0)
	{
		_putchar('+');
		result = 1;
	}
	if (c == 0)
	{
		_putchar('0');
		result = 0;
	}
	if (c < 0)
	{
		_putchar('-');
		result = -1;
	}
		return (result);
}
