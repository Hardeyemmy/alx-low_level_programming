#include "main.h"
#include <stdio.h>
/**
 * print_array - print array of numbers
 *
 * @a: pointer parameter 1
 * @n: pointer parameter 2
 *
 * Return: End the program
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; n--; i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
		printf(", ");
		}
	}
	printf('\n');
}
