#include "main.h"
/**
 * _strlen_recursion - function that return the length of a string
 *
 * @s: pointer parameter to the string
 *
 * Return: End the program
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
