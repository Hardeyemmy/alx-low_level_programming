#include "main.h"
/**
 * print_line - write a draw line on the terminal
 *
 * Return: Return value
 */
void print_line(int n)
{
	while (n-- > 0)
	{
	_putchar('-');
	}
	_putchar('\n');
}
