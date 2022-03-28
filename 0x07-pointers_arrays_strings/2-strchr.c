#include "main.h"
/**
 * _strchr - function that print a character in a string
 *
 * @s: pointer to char
 * @c: chars params to found
 *
 * Return: End the program
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s)
		}
		s++;
	}
	if (*s == c)
	{
	return (s);
	}
	return (0);
}
