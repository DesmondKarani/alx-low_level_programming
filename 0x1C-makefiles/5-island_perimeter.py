#!/usr/bin/python3
"""
Module to find the perimeter of an island in a grid.

The grid is a list of lists of integers where 0 represents water and
1 represents land.
Cells are only connected horizontally and vertically.
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """
    height = len(grid)
    width = len(grid[0]) if height else 0
    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                perimeter += 4

                if i > 0 and grid[i - 1][j] == 1:  # check the cell above
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:  # check the cell to the left
                    perimeter -= 2

    return perimeter

# Test the function with the provided main
if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    print(island_perimeter(grid))
