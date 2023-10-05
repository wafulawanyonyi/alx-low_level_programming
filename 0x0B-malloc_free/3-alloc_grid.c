#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Allocates memory for a 2D array of integers
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: Pointer to the allocated 2D array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int i, j;

    if (width <= 0 || height <= 0)
        return NULL;

    /* Allocate memory for the rows */
    grid = (int **)malloc(height * sizeof(int *));
    if (grid == NULL)
        return NULL;

    /* Allocate memory for the columns and initialize to 0 */
    for (i = 0; i < height; i++)
    {
        grid[i] = (int *)malloc(width * sizeof(int));
        if (grid[i] == NULL)
        {
            /* Free previously allocated memory on failure */
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return NULL;
        }

        /* Initialize each element to 0 */
        for (j = 0; j < width; j++)
            grid[i][j] = 0;
    }

    return grid;
}

