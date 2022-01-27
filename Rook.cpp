
#include "Rook.h"





int Rook::W_Rook(int ox, int oy, int nx, int ny)
{
	for (int i = ox - 1; i >= 0; i--)
	{
		if (boardcells[oy][i] >= 0 && (nx == i && ny == oy))
		{
			return 1;
		}
		else if (boardcells[oy][i] != 0)
		{
			break;
		}
	}
	for (int i = oy - 1; i >= 0; i--)
	{
		if (boardcells[i][ox] >= 0 && (ny == i && nx == ox))
		{
			return 1;
		}
		else if (boardcells[i][ox] != 0)
		{
			break;
		}
	}
	for (int i = ox + 1; i <= 7; i++)
	{
		if (boardcells[oy][i] >= 0 && (ny == oy && nx == i))
		{
			return 1;
		}
		else if (boardcells[oy][i] != 0)
		{
			break;
		}
	}
	for (int i = oy + 1; i <= 7; i++)
	{
		if (boardcells[i][ox] >= 0 && (ny == i && nx == ox))
		{
			return 1;
		}
		else if (boardcells[i][ox] != 0)
		{
			break;
		}
	}
	return 0;
}

int Rook::B_Rook(int ox, int oy, int nx, int ny)
{
	for (int i = ox - 1; i >= 0; i--)
	{
		if (boardcells[oy][i] <= 0 && (nx == i && ny == oy))
		{
			return 1;
		}
		else if (boardcells[oy][i] != 0)
		{
			break;
		}
	}
	for (int i = oy - 1; i >= 0; i--)
	{
		if (boardcells[i][ox] <= 0 && (ny == i && nx == ox))
		{
			return 1;
		}
		else if (boardcells[i][ox] != 0)
		{
			break;
		}
	}
	for (int i = ox + 1; i <= 7; i++)
	{
		if (boardcells[oy][i] <= 0 && (ny == oy && nx == i))
		{
			return 1;
		}
		else if (boardcells[oy][i] != 0)
		{
			break;
		}
	}
	for (int i = oy + 1; i <= 7; i++)
	{
		if (boardcells[i][ox] <= 0 && (ny == i && nx == ox))
		{
			return 1;
		}
		else if (boardcells[i][ox] != 0)
		{
			break;
		}
	}
	return 0;
}


// Checks for rooks

int Rook::WR_Win(int ox, int oy, int kx, int ky)
{
	for (int i = ox - 1; i >= 0; i--) 
	{
		if (boardcells[oy][i] >= 0 && (kx == i && ky == oy))
		{
			return 1;
		}
		else if (boardcells[oy][i] != 0)
		{
			break;
		}
	}
	for (int i = oy - 1; i >= 0; i--) 
	{
		if (boardcells[i][ox] >= 0 && (ky == i && kx == ox))
		{
			return 1;
		}
		else if (boardcells[i][ox] != 0)
		{
			break;
		}
	}
	for (int i = ox + 1; i < length; i++) 
	{
		if (boardcells[oy][i] >= 0 && (ky == oy && kx == i))
		{
			return 1;
		}
		else if (boardcells[oy][i] != 0)
		{
			break;
		}
	}
	for (int i = oy + 1; i < length; i++) 
	{
		if (boardcells[i][ox] >= 0 && (ky == i && kx == ox))
		{
			return 1;
		}
		else if (boardcells[i][ox] != 0)
		{
			break;
		}
	}
	return 0;
}

int Rook::BR_Win(int ox, int oy, int kx, int ky)
{
	for (int i = ox - 1; i >= 0; i--) 
	{
		if (boardcells[oy][i] <= 0 && (kx == i && ky == oy))
		{
			return 1;
		}
		else if (boardcells[oy][i] != 0)
		{
			break;
		}
	}
	for (int i = oy - 1; i >= 0; i--) 
	{
		if (boardcells[i][ox] <= 0 && (ky == i && kx == ox))
		{
			return 1;
		}
		else if (boardcells[i][ox] != 0)
		{
			break;
		}
	}
	for (int i = ox + 1; i < length; i++) 
	{
		if (boardcells[oy][i] <= 0 && (ky == oy && kx == i))
		{
			return 1;
		}
		else if (boardcells[oy][i] != 0)
		{
			break;
		}
	}
	for (int i = oy + 1; i < length; i++) 
	{
		if (boardcells[i][ox] <= 0 && (ky == i && kx == ox))
		{
			return 1;
		}
		else if (boardcells[i][ox] != 0)
		{
			break;
		}
	}
	return 0;
}