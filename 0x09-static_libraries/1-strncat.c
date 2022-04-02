#include "main.h"
/**
 * _strncat - cat two strings
 *
 * @dest: pointer parameter of type char
 * @src: pointer parameter of type char
 * @n: integer parameter 
 *
 * Return: end the program
 */
char *_strncat(char *dest, char *src, int n)
{
	int m = 0, i;

	for (i = 0; i < 1000; i++)
	{
	if (dest[i] == '\0')
	{
		break;
	}
	m++;
	}
	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[m + 1] = src[i];
	}
	dest[m + 1] = '\0';
	return (dest);
}
