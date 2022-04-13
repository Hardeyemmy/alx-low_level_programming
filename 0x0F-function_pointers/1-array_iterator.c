#include <stdio.h>
/**
 * array_iterator - function that execute a function
 *
 * @array: array of element
 * @size: array size
 * @action: pointer to a function
 *
 * Return: End the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
