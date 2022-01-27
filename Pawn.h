#pragma once
#include "Piece.h"
#include "Board.h"

class Pawn : public Piece
{
public:

	int W_Pawn(int ix, int iy, int nx, int ny);
	int B_Pawn(int ix, int iy, int nx, int ny);

	int WP_Win(int posx, int posy, int kx, int ky);
	int BP_Win(int posx, int posy, int kx, int ky);


};

