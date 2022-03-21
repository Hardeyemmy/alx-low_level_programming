#include "main.h"
/**
 * puts_half - write a program that print half
 *
 * @str: parameter in terms of pointer str
 *
 * Return: End the program
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	i++;
	for (i /= 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
