#include "main.h"
/**
 * _islower - check if the lower case is true
 *Description: it returns 1 if its lower and 0 if not
 * Return: always 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);
	else
	return (0);
}
