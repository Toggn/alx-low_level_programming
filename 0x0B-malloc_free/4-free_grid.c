#include <stdlib.h>
#include"main.h"
/**
 * free_grid - Frees a 2-dimensional grid.
 *
 * This function frees the memory allocated for a 2D grid.
 *
 * @grid: Pointer to the 2D grid.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;


for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
