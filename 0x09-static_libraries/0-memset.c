#include "main.h"
/**
 * _memset - function that print alx students
 *
 * @s: pointer parameter 1
 * @b: char parameter 2
 * @n: int parameter 3
 *
 * Return: End the program
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)
	{
		s[i] = b;
	}
	return (s);
}
