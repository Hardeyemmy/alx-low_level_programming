#include "main.h"
/**
 * _memcpy - that copy one string into another
 *
 * @dest: pointer parameter to char
 * @src: pointer parameter to char
 * @n: unnsigned int parameter
 *
 * Return: End the program
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)
	{
	dest[i] = src[i];
	}
	return (dest);
}
