#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 *
 * @array: the given array
 * @size: the size of the array
 * @cmp: a pointer to the function to compare
 *
 * Return: End the program
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
