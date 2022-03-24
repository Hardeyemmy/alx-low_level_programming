#include "main.h"
/**
 * leet - encode 
 *
 * @s: pointer parameter
 *
 * Return: End the program
 */
char *leet(char *s)
{
	int i, j;
	char l[] = "ol_ea__t";

	for (i = 0; s[i] != '\0'; i++)
	{
	for (s[i] == l[j] || s[i] == (l[j] - 32))
	{
		s[i] = j + '0';
	}
	}
	return (s);
}

