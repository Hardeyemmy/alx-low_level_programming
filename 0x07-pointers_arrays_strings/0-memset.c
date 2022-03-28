#include "main.h"
/**
 * _memset - function that fill the memory with constant byte
 *
 * @s: pointer parameter to char
 * @b: character parameter
 * @n: unsigned int parameter
 *
 * Return: End the program
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
