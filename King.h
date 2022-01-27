#pragma once
#include <iostream>
#include "Pawn.h"
#include "Rook.h"
#include "Bishop.h"
#include "Queen.h"
#include "Knight.h"



class King : public Pawn, public Bishop, public Knight, public Rook, public Queen //this inheritance is made because gives us possibility to check if the king can still fight
{
public:
	int length = 8;
	int Black_Pawn = 1;
	int White_Pawn = -1;
	int Black_Rook = 2; 
	int White_Rook = -2;
	int Black_Knight = 3; 
	int White_Knight = -3;
	int Black_Bishop = 4; 
	int White_Bishop= -4;
	int Black_Queen= 5;
	int White_Queen = -5;
	int Black_King= 6;
	int White_King = -6;
	int kingBlack = 0;
	int kingWhite = 0; 
	int kingBlackx{}; //this and below ints are made to check if on any coordinates there are opponent directly attacks kings
	int kingWhitex{}; 
	int kingBlacky{}; 
	int kingWhitey{};


	int KingWF(int ix, int iy, int nx, int ny);
	int KingBF(int ix, int iy, int nx, int ny);

	int WKing_Win(int posx, int posy, int kx, int ky);
	int BKing_Win(int posx, int posy, int kx, int ky);

	int BKing_Check(int posKingx, int posKingy);
	int WKing_Check(int posKingx, int posKingy);

	void WKing_Position();
	void BKing_Position();


};


