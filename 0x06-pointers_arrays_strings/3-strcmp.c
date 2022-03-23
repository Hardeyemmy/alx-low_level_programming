#include "main.h"
/**
 * _strcmp - function that compare two strings
 *
 * @s1: pointer parameter 1
 * @s2: pointer parameter 2
 *
 * Return: End the program
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 -*s2);
}
