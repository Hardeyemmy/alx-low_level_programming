#include "main.h"
/**
 * print_line - write a draw line on the terminal
 *
 * Return: return the value
 */
void print_line(int c)
{
	if (c > 0)
	{
		while (c--)
		{
		_putchar(95);
		}
	}
	_putchar(10);
}
