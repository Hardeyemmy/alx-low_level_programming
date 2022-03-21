#include "main.h"
/**
 * *_strcpy - function that copy a string to the source src
 *
 * @dest: pointer parameter 1
 * @src: pointer parameter 2
 *
 * Return: End the program
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0')
		;

		return (dest);
}
