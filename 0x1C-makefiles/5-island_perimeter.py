#!/usr/bin/python3

''' This module contains the function island_perimenter '''


def island_perimeter(grid):
    ''' This function calculates the perimeter of an island csurrounded by
        water. '''

    land = 0

    for lst in grid:
        for i in lst:
            if i == 1:
                land += 1
    return (land + 1)* 2
