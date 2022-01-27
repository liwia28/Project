
#include "Bishop.h"
int  Bishop::W_Bishop(int ox, int oy, int nx, int ny)
{
	int j = ox - 1;
	for (int i = oy - 1; i >= 0; i--)
	{
		if (boardcells[i][j] >= 0 && (ny == i && nx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = ox + 1;
	for (int i = oy - 1; i >= 0; i--)
	{
		if (boardcells[i][j] >= 0 && (ny == i && nx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j++;
	}
	j = ox - 1;
	for (int i = oy + 1; i <= 7; i++)
	{
		if (boardcells[i][j] >= 0 && (ny == i && nx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = ox + 1;
	for (int i = oy + 1; i <= 7; i++)
	{
		if (boardcells[i][j] >= 0 && (ny == i && nx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j++;
	}
	return 0;
}

int Bishop::B_Bishop(int ox, int oy, int nx, int ny)
{
	int j = ox - 1;
	for (int i = oy - 1; i >= 0; i--)
	{
		if (boardcells[i][j] <= 0 && (ny == i && nx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = ox + 1;
	for (int i = oy - 1; i >= 0; i--)
	{
		if (boardcells[i][j] <= 0 && (ny == i && nx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j++;
	}
	j = ox - 1;
	for (int i = oy + 1; i <= 7; i++)
	{
		if (boardcells[i][j] <= 0 && (ny == i && nx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = ox + 1;
	for (int i = oy + 1; i <= 7; i++)
	{
		if (boardcells[i][j] <= 0 && (ny == i && nx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j++;
	}
	return 0;
}
 
int Bishop::WB_Win (int ox, int oy, int kx, int ky)
{
	int j = ox - 1;
	for (int i = oy - 1; i >= 0; i--)
	{
		if (boardcells[i][j] >= 0 && (ky == i && kx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = ox + 1;
	for (int i = oy - 1; i >= 0; i--)
	{
		if (boardcells[i][j] >= 0 && (ky == i && kx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j++;
	}
	j = ox - 1;
	for (int i = oy + 1; i <= 7; i++)
	{
		if (boardcells[i][j] >= 0 && (ky == i && kx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = ox + 1;
	for (int i = oy + 1; i <= 7; i++)
	{
		if (boardcells[i][j] >= 0 && (ky == i && kx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j++;
	}
	return 0;
}

int Bishop::BB_Win(int ox, int oy, int kx, int ky)
{
	int j = ox - 1;
	for (int i = oy - 1; i >= 0; i--)
	{
		if (boardcells[i][j] <= 0 && (ky == i && kx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = ox + 1;
	for (int i = oy - 1; i >= 0; i--)
	{
		if (boardcells[i][j] <= 0 && (ky == i && kx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j++;
	}
	j = ox - 1;
	for (int i = oy + 1; i <= 7; i++)
	{
		if (boardcells[i][j] <= 0 && (ky == i && kx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j--;
	}
	j = ox + 1;
	for (int i = oy + 1; i <= 7; i++)
	{
		if (boardcells[i][j] <= 0 && (ky == i && kx == j))
		{
			return 1;
		}
		else if (boardcells[i][j] != 0)
		{
			break;
		}
		j++;
	}
	return 0;
}