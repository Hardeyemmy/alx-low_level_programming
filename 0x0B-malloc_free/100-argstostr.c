#include "main.h"
#include <stdlib.h>
/**
 * _strlen - length of the string
 *
 * @s: input char
 *
 * Return: return string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
/**
 * argstostr - function that concatenates all the arguments given
 *
 * @ac: count
 * @av: vector
 *
 * Return: End the program
 */
char *argstostr(int ac, char **av)
{
	int i, j, k;
	int len, R = 0;
	char *p;

	if ((ac == '\0') || (av == NULL))
	{
		return (NULL);
	}
	R = 0;

	for (i = 0; i < ac; i++)
	{
		len = _strlen(av[i]) + 1;
			R += len;
	}
	p = malloc(sizeof(char) * R + 1);
		if (!p)
		{
			return (NULL);
		}
		for (i = 0; i < ac; i++)
		{
			len = _strlen(av[i]);

		for (j = 0; j < len; j++, k++)
		{
			p[k] = av[i][j];
		}
		p[k++] = '\n';
	}
	p[k] = '\0';
	return (p);
}
