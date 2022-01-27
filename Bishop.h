#pragma once
#include "Piece.h"
#include "Board.h"

class Bishop : public Piece
{
public:

	int W_Bishop(int ix, int iy, int zx, int zy); //this coordinates are used to move our figure 
	int B_Bishop(int ix, int iy, int zx, int zy);
    int WB_Win(int posx, int posy, int kx, int ky); //this coordinates are used to check if our fugure make matte finish
	int BB_Win(int posx, int posy, int kx, int ky);
};

