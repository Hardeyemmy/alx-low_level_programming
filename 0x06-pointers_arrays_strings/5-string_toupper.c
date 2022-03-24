#include "main.h"
/**
 * *string_toupper - function that changes all lowercase of string to uppercase
 *
 * @s: pointer parameter 
 *
 * Return: return *s
 */
char *string_troupper(char *s)
{
	int i;

	for (i = 0; s[i] = '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
