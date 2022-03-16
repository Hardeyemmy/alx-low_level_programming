#include "main.h"
/**
 * main - check for uppercase letters
 *
 * Return: 1 if c is uppercase  or 0 if c is anything else
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
