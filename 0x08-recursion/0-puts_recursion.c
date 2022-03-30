#include "main.h"
/**
 * _puts_recursion - function that print a string followed by a new line
 *
 * @s: pointer parameter string to print
 *
 * Return: End the program
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);
	s++;
	_put_recursion(s);
}
