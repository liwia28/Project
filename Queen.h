#pragma once
#include "Piece.h"
#include"Board.h"

class Queen : public Piece
{
public:

	int W_Queen(int ix, int iy, int nx, int ny);
	int B_Queen(int ix, int iy, int nx, int ny);

	int WQ_Win(int posx, int posy, int kx, int ky);
	int BQ_Win(int posx, int posy, int kx, int ky);


};

