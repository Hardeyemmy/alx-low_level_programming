#include "main.h"
/**
 * _memcpy - function that copies memory area
 *
 * @dest: pointer parameter 1
 * @src: pointer parameter 2
 * @n: unsigned integer
 *
 * Return: End the program
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i]
	}
	return (dest);
}
