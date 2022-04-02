#include "main.h"
/**
 * _strcat - function that commute two strings
 *
 * @dest: pointer parameter 1
 * @src: pointer parameter 2
 *
 * Return: End the program
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
