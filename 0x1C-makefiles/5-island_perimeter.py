#!/usr/bin/python3
"""
Returns the perimeter of the island
"""


def island_perimeter(grid):
    """
    a function that returns the perimeter
    """
    perimeter = 0

    if grid is None or not isinstance(grid, list):
        return 0
    for i in range(len(grid)):
        for element in range(len(grid[i])):
            if grid[i][element] is 1:
                perimeter += 4
                try:
                    if element - 1 < 0:
                        pass
                    elif grid[i][element - 1] == 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if grid[i][element + 1] == 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if i - 1 < 0:
                        pass
                    elif grid[i - 1][element] == 1:
                        perimeter -= 1
                except Exception:
                    pass
                try:
                    if i + 1 >= len(grid):
                        pass
                    elif grid[i + 1][element] == 1:
                        perimeter -= 1
                except Exception:
                    pass
    return perimeter
