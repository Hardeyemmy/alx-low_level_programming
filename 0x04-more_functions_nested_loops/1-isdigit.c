#include "main.h"
/**
 * main - isdigit function
 *
 * Return: return value
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
