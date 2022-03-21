#include "main.h"
/**
 * puts2 - print every character of a string from the first character followed by a new line
 *
 * @str: a pointer parameter
 *
 * Return: End the program
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
		_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
