#!/usr/bin/python3
"""
Function that returns the perimeter
of the island described
"""


def island_perimeter(grid):
    """
    Function that returns the perimeter
    of the island described
    """
    perimeter = 0
    for j, row in enumerate(grid):
        for k, cell in enumerate(row):
            if cell == 1:
                if j == 0 or grid[j - 1][k] == 0:
                    perimeter = perimeter + 1
                if j == len(grid) - 1 or grid[j + 1][k] == 0:
                    perimeter = perimeter + 1
                if k == 0 or grid[j][k - 1] == 0:
                    perimeter = perimeter + 1
                if k == len(row) - 1 or grid[j][k + 1] == 0:
                    perimeter = perimeter + 1
    return perimeter
