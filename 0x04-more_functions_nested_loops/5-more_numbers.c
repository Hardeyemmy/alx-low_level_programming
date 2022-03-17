#include "main.h"
/**
 * main - print mutiply from 0 to 14 ten times
 *
 * Return: End the program
 */
void more_numbers(void)
{
	int n = 48;
	int l = 0;
	int reset = 0;

	while (l < 10)
	{
		while (n <= 62)
		{
			if (n > 57)
			{
				reset =  10;
				_putchar(49);
			}
			_putchar(n - reset);
			n++;
		}
		n = 48;
		reset = 0;
		l++;
		_putchar(10);
	}
}
