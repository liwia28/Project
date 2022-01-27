
#include "Pawn.h"

int Pawn::W_Pawn(int ox, int oy, int nx, int ny)
{
	if (oy == 6)
	{
		if ((ny == oy - 1 && nx == ox && boardcells[oy - 1][ox] == 0) || (ny == oy - 2 && nx == ox && boardcells[oy - 1][ox] == 0 && boardcells[oy - 2][ox] == 0))
		{
			return 1;
		}
	}
	else if (ny == oy - 1 && nx == ox && boardcells[oy - 1][ox] == 0)
	{
		return 1;
	}
	if (boardcells[oy - 1][ox - 1] > 0)
	{
		if (ny == oy - 1 && nx == ox - 1)
		{
			return 1;
		}
	}
	if (boardcells[oy - 1][ox + 1] > 0)
	{
		if (ny == oy - 1 && nx == ox + 1)
		{
			return 1;
		}
	}
	return 0;
}

int Pawn::B_Pawn(int ox, int oy, int nx, int ny)
{

	if (oy == 1)
	{
		if ((ny == oy + 1 && nx == ox && boardcells[oy + 1][ox] == 0) || (ny == oy + 2 && nx == ox && boardcells[oy + 1][ox] == 0 && boardcells[oy + 2][ox] == 0))
		{
			return 1;
		}
	}
	else if (ny == oy + 1 && nx == ox && boardcells[oy + 1][ox] == 0)
	{
		return 1;
	}
	if (boardcells[oy + 1][ox - 1] < 0)
	{
		if (ny == oy + 1 && nx == ox - 1)
		{
			return 1;
		}
	}
	if (boardcells[oy + 1][ox + 1] < 0)
	{
		if (ny == oy + 1 && nx == ox + 1)
		{
			return 1;
		}
	}
	return 0;
}


//Checks of Pawns


int Pawn::WP_Win(int posx, int posy, int kx, int ky)
{
	if (boardcells[posy - 1][posx - 1] >= 0)
	{
		if (posy - 1 == ky && posx - 1 == kx)
		{
			return 1;
		}
	}
	if (boardcells[posy - 1][posx + 1] >= 0)
	{

		if (posy - 1 == ky && posx + 1 == kx)
		{
			return 1;
		}
	}
	return 0;
}

int Pawn::BP_Win(int ox, int oy, int kx, int ky)
{
	if (boardcells[oy + 1][ox - 1] <= 0)
	{
		if (ky == oy + 1 && kx == ox - 1)
		{
			return 1;
		}
	}
	if (boardcells[oy + 1][ox + 1] <= 0)
	{
		if (ky == oy + 1 && kx == ox + 1)
		{
			return 1;
		}
	}
	return 0;
}