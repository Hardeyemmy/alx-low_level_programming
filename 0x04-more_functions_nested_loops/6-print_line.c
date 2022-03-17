#include "main.h"
/**
 * print_line - write a draw line on the terminal
 *
 * Return: Return value
 */
void print_line(int n)
{
	if (n > 0)
	{
		while (n--)
		{
		_putchar(95);
		}
	}
	_putchar(10);
}
