#pragma once
#include <iostream>
#include "Piece.h"
#include"Board.h"

class Rook : public Piece
{
public:
	int rookWhiteRight = 0; //below we special coordiantes for rook because its moves are exactly along x and y axis  
	int rookWhiteLeft = 0;
	int rookBlackRight = 0; 
	int rookBlackLeft = 0;
	int W_Rook(int ix, int iy, int nx, int ny);
	int B_Rook(int ix, int iy, int nx, int ny);

	int WR_Win(int posx, int posy, int kx, int ky);
	int BR_Win(int posx, int posy, int kx, int ky);


};

