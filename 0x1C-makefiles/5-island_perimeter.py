#!/usr/bin/python3
"""this module to solve the the island perimeter problem"""


def island_perimeter(grid):
    """this function calculates the grid of the island"""
    width = len(grid[0])
    height = len(grid)
    interior = 0
    block = 0

    for n in range(height):
        for j in range(width):
            if grid[n][j] == 1:
                block += 1
                if (j > 0 and grid[n][j - 1] == 1):
                    interior += 1
                if (n > 0 and grid[n - 1][j] == 1):
                    interior += 1
    return block * 4 - interior * 2
