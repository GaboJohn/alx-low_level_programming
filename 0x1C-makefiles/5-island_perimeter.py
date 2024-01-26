#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """Return the perimeter of an island.

    The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    if not grid or not grid[0]:
        # Empty grid or invalid input
        return 0

    height = len(grid)
    width = len(grid[0])

    perimeter = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                # Count top and left edges
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1

    return perimeter * 2
