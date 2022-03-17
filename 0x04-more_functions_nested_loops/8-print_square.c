#include "main.h"
/**
 * print_square - print the square of a given number
 *
 * Return: End the program
 */
void print_square(int size)
{
	int rows = size;
	int orSize = size;

	if (size > 0)
	{
		while (size--)
		{
			while (rows--)
			{
			_putchar(35);
			}
			_putchar(10);
			rows = orSize;
		}
	}
	else
	{
		_putchar(10);
	}
}
