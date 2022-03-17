#include "main.h"
/**
 * print_line - write a draw line on the terminal
 *
 * Return: Return value
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 1; i <= n; i++)
	{
		_putchar('-');
	}
	_putchar('\n');
	}
}
