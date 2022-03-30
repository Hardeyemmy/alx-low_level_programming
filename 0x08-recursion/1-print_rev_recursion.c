#include "main.h"
/**
 * _print_rev_recursion - function that print a string in reverse
 *
 * @s: pointer parameter of the string
 *
 * Return: End the program
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
