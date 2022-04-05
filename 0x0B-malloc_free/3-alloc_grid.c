#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to 2D array of integers
 *
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: End the program
 */
int **alloc_grid(int width, int height)
{
	int **s, r, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < height; r++)
	{
		s[r] = malloc(sizof(int) * width);
		if (s[r] == NULL)
		{
			for (; r >= 0; r--)
			{
				free(s[r]);
			}
			free(s);
			return (NULL);
		}
		for (c = 0; c <= width; c++)
		{
			s[r][c] = 0;
		}
	}
	return (s);
}
