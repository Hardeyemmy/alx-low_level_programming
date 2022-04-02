#include "main.h"
/**
 * _strchr - print c
 *
 * @s: pointer parameter to char
 * @c: paramter type of char
 *
 * Return: End the program
 */
char *_strchr(char *s, char c)
{
	int i; 

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + 1);
		}
	}
	return (0);
}
