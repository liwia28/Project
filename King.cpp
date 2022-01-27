
#include "King.h"

int King::WKing_Win(int ox, int oy, int kx, int ky)
{
	if (ox - 1 >= 0 && oy - 1 >= 0 && ky == oy - 1 && kx == ox - 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && kx == ox && ky == oy - 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox + 1 < length && kx == ox + 1 && ky == oy - 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (ox + 1 < length && ky == oy && kx == ox + 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (ox + 1 < length && oy + 1 < length && ky == oy + 1 && kx == ox + 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy + 1 < length && ky == oy + 1 && kx == ox && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (ox - 1 >= 0 && oy + 1 < length && kx == ox - 1 && ky == oy + 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (ox - 1 >= 0 && ky == oy && kx == ox - 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	return 0;
}

int King::BKing_Win(int ox, int oy, int kx, int ky)
{
	if (ox - 1 >= 0 && oy - 1 >= 0 && ky == oy - 1 && kx == ox - 1 && boardcells[ky][kx] >= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && kx == ox && ky == oy - 1 && boardcells[ky][kx] >= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox + 1 < length && kx == ox + 1 && ky == oy - 1 && boardcells[ky][kx] >= 0)
	{
		return 1;
	}
	if (ox + 1 < length && ky == oy && kx == ox + 1 && boardcells[ky][kx] >= 0)
	{
		return 1;
	}
	if (ox + 1 < length && oy + 1 < length && ky == oy + 1 && kx == ox + 1 && boardcells[ky][kx] >= 0)
	{
		return 1;
	}
	if (oy + 1 < length && ky == oy + 1 && kx == ox && boardcells[ky][kx] >= 0)
	{
		return 1;
	}
	if (ox - 1 >= 0 && oy + 1 < length && kx == ox - 1 && ky == oy + 1 && boardcells[ky][kx] >= 0)
	{
		return 1;
	}
	if (ox - 1 >= 0 && ky == oy && kx == ox - 1 && boardcells[ky][kx] >= 0)
	{
		return 1;
	}
	return 0;
}
//WhiteKingCheckF and BlackKingCheckF are needed and useful for letting the game know the kings positions so it can later on check if the king is in a check or checkmate status
//Multiple inheritance is needed so we can inherit functions checking if other pieces on the board are in a location. So it is being used here in the testing if the kings are in danger of getting eliminated
int King::BKing_Check(int posKingx, int posKingy)
{
	int k = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (boardcells[i][j] < 0)
			{
				if (boardcells[i][j] == White_Pawn)
				{
					k = Pawn::WP_Win(j, i, posKingx, posKingy);
				}
				if (boardcells[i][j] == White_Rook)
				{
					k = Rook::WR_Win(j, i, posKingx, posKingy);
				}
				if (boardcells[i][j] == White_Knight)
				{
					k = Knight::WK_Win(j, i, posKingx, posKingy);
				}
				if (boardcells[i][j] == White_Bishop)
				{
					k = Bishop::WB_Win(j, i, posKingx, posKingy);
				}
				if (boardcells[i][j] == White_Queen)
				{
					k = Queen::WQ_Win(j, i, posKingx, posKingy);
				}
				if (boardcells[i][j] == White_King)
				{
					k = WKing_Win(j, i, posKingx, posKingy);
				}
				if (k == 1)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int King::WKing_Check(int posKingx, int posKingy)
{
	int k = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (boardcells[i][j] > 0)
			{
				if (boardcells[i][j] == Black_Pawn)
				{
					k = Pawn::BP_Win(j, i, posKingx, posKingy);
				}
				if (boardcells[i][j] == Black_Rook)
				{
					k = Rook::BR_Win(j, i, posKingx, posKingy);
				}
				if (boardcells[i][j] == Black_Knight)
				{
					k = Knight::BK_Win(j, i, posKingx, posKingy);
				}
				if (boardcells[i][j] == Black_Bishop)
				{
					k = Bishop::BB_Win(j, i, posKingx, posKingy);
				}
				if (boardcells[i][j] == Black_Queen)
				{
					k = Queen::BQ_Win(j, i, posKingx, posKingy);
				}
				if (boardcells[i][j] == Black_King)
				{
					k = BKing_Win(j, i, posKingx, posKingy);
				}
				if (k == 1)
				{

					return 0;
				}
			}
		}
	}
	return 1;
}

//both the Kingwf and Kingpbf functions handle movement of the pieces across the board and register it. They are needed inside ProjChess.cpp (which is the main file) and will be useful in there

int King::KingWF(int ox, int oy, int nx, int ny)
{
	if (ox - 1 >= 0 && oy - 1 >= 0 && ny == oy - 1 && nx == ox - 1 && boardcells[ny][nx] >= 0)
	{
		int k =WKing_Check(ox - 1, oy - 1);
		if (k == 1)
		{
			return 1;  // top left
		}
	}
	if (oy - 1 >= 0 && nx == ox && ny == oy - 1 && boardcells[ny][nx] >= 0)
	{
		int k = WKing_Check(ox, oy - 1);
		if (k == 1)
		{
			return 1; // top
		}
	}
	if (oy - 1 >= 0 && ox + 1 < length && nx == ox + 1 && ny == oy - 1 && boardcells[ny][nx] >= 0)
	{
		int k = WKing_Check(ox + 1, oy - 1);
		if (k == 1)
		{
			return 1; // rop right
		}
	}
	if (ox + 1 < length && ny == oy && nx == ox + 1 && boardcells[ny][nx] >= 0)
	{
		int k = WKing_Check(ox + 1, oy);
		if (k == 1)
		{
			return 1; // right
		}
	}
	if (ox + 1 < length && oy + 1 < length && ny == oy + 1 && nx == ox + 1 && boardcells[ny][nx] >= 0)
	{
		int k = WKing_Check (ox + 1, oy + 1);
		if (k == 1)
		{
			return 1; // right bottom
		}
	}
	if (oy + 1 < length && ny == oy + 1 && nx == ox && boardcells[ny][nx] >= 0)
	{
		int k = WKing_Check(ox, oy + 1);
		if (k == 1)
		{
			return 1; // bottom
		}
	}
	if (ox - 1 >= 0 && oy + 1 < length && nx == ox - 1 && ny == oy + 1 && boardcells[ny][nx] >= 0)
	{
		int k = WKing_Check(ox - 1, oy + 1);
		if (k == 1)
		{
			return 1; // bottom left
		}
	}
	if (ox - 1 >= 0 && ny == oy && nx == ox - 1 && boardcells[ny][nx] >= 0)
	{
		int k = WKing_Check(ox - 1, oy);
		if (k == 1)
		{
			return 1; // left
		}
	}
	
	return 0;
}


int King::KingBF(int ox, int oy, int nx, int ny)
{
	if (ox - 1 >= 0 && oy - 1 >= 0 && ny == oy - 1 && nx == ox - 1 && boardcells[ny][nx] <= 0)
	{
		int ok = BKing_Check(ox - 1, oy - 1);
		if (ok == 1)
		{
			return 1;  // top left
		}
	}
	if (oy - 1 >= 0 && nx == ox && ny == oy - 1 && boardcells[ny][nx] <= 0)
	{
		int ok = BKing_Check(ox, oy - 1);
		if (ok == 1)
		{
			return 1; // top
		}
	}
	if (oy - 1 >= 0 && ox + 1 < length && nx == ox + 1 && ny == oy - 1 && boardcells[ny][nx] <= 0)
	{
		int ok = BKing_Check(ox + 1, oy - 1);
		if (ok == 1)
		{
			return 1; // right top
		}
	}
	if (ox + 1 < length && ny == oy && nx == ox + 1 && boardcells[ny][nx] <= 0)
	{
		int ok = BKing_Check(ox + 1, oy);
		if (ok == 1)
		{
			return 1; // right
		}
	}
	if (ox + 1 < length && oy + 1 < length && ny == oy + 1 && nx == ox + 1 && boardcells[ny][nx] <= 0)
	{
		int ok = BKing_Check(ox + 1, oy + 1);
		if (ok == 1)
		{
			return 1; // right bottom
		}
	}
	if (oy + 1 < length && ny == oy + 1 && nx == ox && boardcells[ny][nx] <= 0)
	{
		int ok = BKing_Check(ox, oy + 1);
		if (ok == 1)
		{
			return 1; // bottom
		}
	}
	if (ox - 1 >= 0 && oy + 1 < length && nx == ox - 1 && ny == oy + 1 && boardcells[ny][nx] <= 0)
	{
		int ok = BKing_Check(ox - 1, oy + 1);
		if (ok == 1)
		{
			return 1; // left bottom
		}
	}
	if (ox - 1 >= 0 && ny == oy && nx == ox - 1 && boardcells[ny][nx] <= 0)
	{
		int ok = BKing_Check(ox - 1, oy);
		if (ok == 1)
		{
			return 1; // bottom
		}
	}
	return 0;
}
//whiteKingPoz and blackKingPoz just register the kings position on the board in order to analyze if for any possible dangers and potential moves that can be done
void King::WKing_Position()
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (boardcells[i][j] == White_King)
			{
				kingWhitex = j;
				kingWhitey = i;
				break;
			}
		}
	}
}

void King::BKing_Position()
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length; j++)
		{
			if (boardcells[i][j] == Black_King)
			{
				kingBlacky = i;
				kingBlackx = j;
				break;
			}
		}
	}
}
