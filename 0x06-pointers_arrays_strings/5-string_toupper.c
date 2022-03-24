#include "main.h"
/**
 * *string_toupper - function that changes all lowercase of string to uppercase
 *
 * @s: pointer parameter 
 *
 * Return: return *s
 */
char *string_toupper(char *)
{
	int i;

	for (i = 0; *[i] != '\0'; i++)
	{
		if (*[i] >= 'a' && *[i] <= 'z')
			*[i] -= 32;
	}
	return (*);
}
