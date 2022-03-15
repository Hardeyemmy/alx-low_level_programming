#include "main.h"
/**
 * main - print the alphabet
 *
 * Return: End the program
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
	_putchar(a);
	++a;
	}
	_putchar(10);
}
