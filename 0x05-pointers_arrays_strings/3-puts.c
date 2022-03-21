#include "main.h"
/**
 * _puts - a function that print a string followed by a new line to stdout
 *
 * @str: string is passed as the parameter
 *
 * Return: End the program
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
	_putchar([i]);
	i++;
	}
	_putchar('\n');
}
