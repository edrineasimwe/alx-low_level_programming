#!/usr/bin/python3
"""This module returns the perimeter of the island described in grid"""


def island_perimeter(grid):
    """Function to calculate the perimeter of the island described"""

    width = len(grid[0])
    height = len(grid)
    endpoints = 0
    size = 0

    #We traverse the height
    for i in range(height):
        #Then we traverse the width
        for j in range(width):
            #If we land on a point == 1 then we add it to the total mass
            if grid[i][j] == 1:
                size += 1
                #If as we go right we find a border we add it to the endpoints
                if (j > 0 and grid[i][j - 1] == 1):
                    endpoints += 1
                    #Same goes for going down
                if (i > 0 and grid[i - 1][j] == 1):
                    endpoints += 1
    #After wards we calculate the perimeter of the land masses commulatively
    return size * 4 - endpoints * 2
