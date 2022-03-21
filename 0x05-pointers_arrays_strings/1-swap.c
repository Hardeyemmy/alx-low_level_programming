#include "main.h"
/**
 * swap_int - function that swap between two pointers
 *
 * @a: pointer 1
 * @b: pointer 2
 *
 * Return: End the program
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
