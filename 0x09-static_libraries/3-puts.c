#include "main.h"
/**
 * _puts - print string
 *
 * @s: pointer parameter of type char
 *
 * Return: End the pogram
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
