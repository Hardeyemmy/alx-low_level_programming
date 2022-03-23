#include "main.h"
/**
 * *_strncpy - function that copy a string
 *
 * @dest: pointer parameter 1
 * @src: pointer parameter 2
 * @n: int parameter 3
 *
 * Return: End the program
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int src_len = 0;

	while (src[index++])
		src_len++;
	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];
	for (index = src_len; index < n; index ++)
		dest[index] = '\0';
	return (dest); 
}
