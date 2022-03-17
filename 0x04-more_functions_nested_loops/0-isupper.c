#include "main.h"
/**
 * main - print 1 if uppercase otherwise 0
 *
 * Return: End the program
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
