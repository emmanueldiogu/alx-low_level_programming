#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid previously created
 * by alloc_grid function.
 * @grid: grid
 * @height: height
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
free(grid[i]);
free(grid);
}
