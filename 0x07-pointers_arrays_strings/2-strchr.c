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
	int a = 0, b;

	while (s[a])
	{
		a++;
	}
	for (b = 0; b <= a; b++)
	{
	if (c == s[b])
	{
		s += b;
		return (s);
	}
	}
	return ('\0');
}
