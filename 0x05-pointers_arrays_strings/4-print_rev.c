#include "main.h"
/**
 * print_rev - print a string in reverse followed by a new line
 *
 * @s: the parameter passed into the function
 *
 * Return: End the program
 */
void print_rev(char *s)
{
	int i = 0;
	
	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
