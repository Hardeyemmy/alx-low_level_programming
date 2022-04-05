#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that return a pointer to a newly alocatted memory
 *
 * @str: pointer parameter
 *
 * Return: End the program
 */
char *_strdup(char *str)
{
	char *s;
	int i = 0, j;
	
	if (!str)
	{
		return (NULL);
	}
	while (*(str + i))
	{
		i++;
	}
	i++;
	s = malloc(sizeof(char) * i);
	if (s == NULL)
	{
		return (NULL);
	}
	for (j = 0; j <= i; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
