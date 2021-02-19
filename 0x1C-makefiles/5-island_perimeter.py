#!/usr/bin/python3

"""
    Island Perimeter
"""


def island_perimeter(grid):
    """ island perimeter """
    result = 0
    for i in grid:
        for j in i:
            if j == 1:
                result += 1
    result += 1
    return (2 * result)
