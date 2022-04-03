#include "main.h"
/**
 * _strncpy - copy a string into another string
 *
 * @dest: pointer parameter 1
 * @src: pointer parameter 2
 * @n: integer parameter 3
 *
 * Return: End the program
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
