#pragma once
#include <iostream>
#include <fstream>
#include "More_Positions.h"

template<typename T2, int height, int width>
std::istream& loadmap(std::istream& is, T2(&boardcells)[height][width])
{
    for (int i = 0; i < height; ++i)
    {
        for (int j = 0; j < width; ++j)
        {
            is >> boardcells[i][j];
        }

    }
    return is;
}

