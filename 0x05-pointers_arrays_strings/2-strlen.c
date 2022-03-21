#include "main.h"
/**
 * _strlen - function that return the length of a string
 *
 * @s: the paramater string passed into into the function
 *
 * Return: End the program
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
