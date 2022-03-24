#include "main.h"
/**
 * *string_toupper - function that changes all lowercase of string to uppercase
 *
 * @s: pointer parameter 
 *
 * Return: return *s
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index ] >= 'a' && str[index] <= 'z')
			str[index] -= 32;

		index++;
	}
	return (str);
}
