#include "main.h"
/**
 * *_strncat - function that concatenate two strings
 *
 * @dest: pointer parameter 1
 * @src: pointer parameter 2
 * @n: int parameter 3
 *
 * Return: End the program
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
