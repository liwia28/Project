#pragma once
#include "Piece.h"
#include"Board.h"


class Knight : public Piece
{
public:
	int W_Knight(int ix, int iy, int nx, int ny);
	int B_Knight(int ix, int iy, int nx, int ny);

	int WK_Win(int posx, int posy, int kx, int ky);
	int BK_Win(int posx, int posy, int kx, int ky);


};
