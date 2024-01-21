#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free space assign by malloc area
 * @grid: the array code
 *
 * @height: the row and weight
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	for ( ; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
