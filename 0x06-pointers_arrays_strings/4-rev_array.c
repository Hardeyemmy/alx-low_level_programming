#include "main.h"
/**
 * reverse_array - content that reverses the content of an array of integer
 *
 * @a: pointer parameter 1
 * @n: integer parameter
 *
 * Return: End the program
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
