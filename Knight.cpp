
#include "Knight.h"

int Knight::W_Knight(int ox, int oy, int nx, int ny)
{
	if (oy - 2 >= 0 && ox - 1 >= 0 && ny == oy - 2 && nx == ox - 1 && boardcells[ny][nx] >= 0)
	{
		return 1;
	}
	if (oy - 2 >= 0 && ox + 1 < length && ny == oy - 2 && nx == ox + 1 && boardcells[ny][nx] >= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox + 2 < length && ny == oy - 1 && nx == ox + 2 && boardcells[ny][nx] >= 0)
	{
		return 1;
	}
	if (oy + 1 >= 0 && ox + 2 < length && ny == oy + 1 && nx == ox + 2 && boardcells[ny][nx] >= 0)
	{
		return 1;
	}
	if (oy + 2 < length && ox + 1 < length && ny == oy + 2 && nx == ox + 1 && boardcells[ny][nx] >= 0)
	{
		return 1;
	}
	if (oy + 2 < length && ox - 1 >= 0 && ny == oy + 2 && nx == ox - 1 && boardcells[ny][nx] >= 0)
	{
		return 1;
	}
	if (oy + 1 < length && ox - 2 >= 0 && ny == oy + 1 && nx == ox - 2 && boardcells[ny][nx] >= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox - 2 >= 0 && ny == oy - 1 && nx == ox - 2 && boardcells[ny][nx] >= 0)
	{
		return 1;
	}
	return 0;
}

int Knight::B_Knight(int ox, int oy, int nx, int ny)
{
	if (oy - 2 >= 0 && ox - 1 >= 0 && ny == oy - 2 && nx == ox - 1 && boardcells[ny][nx] <= 0)
	{
		return 1;
	}
	if (oy - 2 >= 0 && ox + 1 < length && ny == oy - 2 && nx == ox + 1 && boardcells[ny][nx] <= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox + 2 < length && ny == oy - 1 && nx == ox + 2 && boardcells[ny][nx] <= 0)
	{
		return 1;
	}
	if (oy + 1 >= 0 && ox + 2 < length && ny == oy + 1 && nx == ox + 2 && boardcells[ny][nx] <= 0)
	{
		return 1;
	}
	if (oy + 2 < length && ox + 1 < length && ny == oy + 2 && nx == ox + 1 && boardcells[ny][nx] <= 0)
	{
		return 1;
	}
	if (oy + 2 < length && ox - 1 >= 0 && ny == oy + 2 && nx == ox - 1 && boardcells[ny][nx] <= 0)
	{
		return 1;
	}
	if (oy + 1 < length && ox - 2 >= 0 && ny == oy + 1 && nx == ox - 2 && boardcells[ny][nx] <= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox - 2 >= 0 && ny == oy - 1 && nx == ox - 2 && boardcells[ny][nx] <= 0)
	{
		return 1;
	}
	return 0;
}

//Here we check if any of kings isn't in the checkmate status because of opponent's knight

int Knight::WK_Win(int ox, int oy, int kx, int ky)
{
	if (oy - 2 >= 0 && ox + 1 < length && ky == oy - 2 && kx == ox + 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox + 2 < length && ky == oy - 1 && kx == ox + 2 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy + 1 >= 0 && ox + 2 < length && ky == oy + 1 && kx == ox + 2 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy + 2 < length && ox + 1 < length && ky == oy + 2 && kx == ox + 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy + 2 < length && ox - 1 >= 0 && ky == oy + 2 && kx == ox - 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy + 1 < length && ox - 2 >= 0 && ky == oy + 1 && kx == ox - 2 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox - 2 >= 0 && ky == oy - 1 && kx == ox - 2 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy - 2 >= 0 && ox - 1 >= 0 && ky == oy - 2 && kx == ox - 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	return 0;
}

int Knight::BK_Win(int ox, int oy, int kx, int ky)
{
	if (oy - 2 >= 0 && ox + 1 < length && ky == oy - 2 && kx == ox + 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox + 2 < length && ky == oy - 1 && kx == ox + 2 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy + 1 >= 0 && ox + 2 < length && ky == oy + 1 && kx == ox + 2 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy + 2 < length && ox + 1 < length && ky == oy + 2 && kx == ox + 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy + 2 < length && ox - 1 >= 0 && ky == oy + 2 && kx == ox - 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy + 1 < length && ox - 2 >= 0 && ky == oy + 1 && kx == ox - 2 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy - 1 >= 0 && ox - 2 >= 0 && ky == oy - 1 && kx == ox - 2 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	if (oy - 2 >= 0 && ox - 1 >= 0 && ky == oy - 2 && kx == ox - 1 && boardcells[ky][kx] <= 0)
	{
		return 1;
	}
	return 0;
}