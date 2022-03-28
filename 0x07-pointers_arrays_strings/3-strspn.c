#include "main.h"
/**
 * _strspn - function that the lenght of a prefix substring
 *
 * @s: pointer parameter 1
 * @accept: pointer parameter 2
 *
 * Return: End the program
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;
	char *t = accept;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept -1))
			{
				c++;
				break;
			}
		if (!(*--accept))
			break;
		accept = t;
	}
	return (c);
}
