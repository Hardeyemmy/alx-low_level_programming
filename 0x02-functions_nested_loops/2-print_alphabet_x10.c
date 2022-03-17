#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet 10x
 *
 * Description: uses two loop to print a - z 10 times
 *
 * Return: End the program
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int n = 10;

	while (n >= 1)
	{
		while (a <= 'z')
		{
			_putchar(a);
			++a;
		}
		--n;
		_putchar(10);
		a = 'a';
	}
}
