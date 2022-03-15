#include "main.h"
/**
 * main - print the alphabet
 *
 * Description: print a-z
 *
 * Return: End the program
 */
int print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
	_putchar(a);
	++a;
	}
	_putchar(10);
}
