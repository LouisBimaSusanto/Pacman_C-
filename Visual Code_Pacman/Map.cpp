// map.cpp
#include "map.h"
#include <iostream>
#include <cstring> // Include for memcpy

Map::Map()
{
    // Ensure each row has exactly 10 characters (matching WIDTH)
    char tempLayout[HEIGHT][WIDTH] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', 'P', '.', '.', '.', '.', '.', '.', 'G', '#'},
        {'#', '.', '#', '#', '#', '#', '#', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
        {'#', '.', '#', '#', '#', '#', '#', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
        {'#', '.', '#', '#', '#', '#', '#', '#', '.', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '#'},
        {'#', 'G', '.', '.', '.', '.', '.', '.', 'P', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}};

    // Copy the array correctly
    std::memcpy(layout, tempLayout, sizeof(tempLayout));
}

void Map::render()
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
        {
            std::cout << layout[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
