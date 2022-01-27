#pragma once
#include<iostream>
// Here we give number for our pieces, because our bord will see them in this way when they'll move and the axis 
//What is more it is the basic class which is inherited 
class Piece
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
	int White_Bishop = -4;
	int Black_Queen = 5;
	int White_Queen = -5;
	int Black_King = 6;
	int White_King = -6;
	int kingBlack = 0;
	int kingWhite = 0;
	int oldpx{};
	int oldpy{};
	int zx{};
	int zy{};

};