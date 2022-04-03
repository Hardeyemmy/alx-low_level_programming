#include "main.h"
/**
 * _strcmp - compare two strings
 *
 * @s1: pointer parameter 1
 * @s2: pointer parameter 2
 *
 * Return: End the program
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, r;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	r = s1[i] - s2[i];
	return (r);
}
