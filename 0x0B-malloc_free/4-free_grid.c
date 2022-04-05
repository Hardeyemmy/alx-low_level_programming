#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees 2D array previously created
 *
 * @grid: pointer to 2D array
 * @height: integer height parameter
 *
 * Return: End the program
 */
void free_grid(int **grid, int height)
{
	height--;
	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
