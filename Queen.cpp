
#include "Queen.h"

int Queen::W_Queen(int ox, int oy, int nx, int ny)
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

int Queen::B_Queen(int ox, int oy, int nx, int ny)
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


//checks for queens

int Queen::WQ_Win(int ox, int oy, int kx, int ky)
{
	for (int i = ox - 1; i >= 0; i--) // left top
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
	for (int i = oy - 1; i >= 0; i--) // top
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
	for (int i = ox + 1; i < length; i++) // top right
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
	for (int i = oy + 1; i < length; i++) // bottom
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
	int j = ox - 1;
	for (int i = oy - 1; i >= 0; i--) // left top1
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
	for (int i = oy - 1; i >= 0; i--) // topright
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
	for (int i = oy + 1; i <= 7; i++) // left bottom
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
	for (int i = oy + 1; i < length; i++)  // right bottom
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

int Queen::BQ_Win(int ox, int oy, int kx, int ky)
{
	for (int i = ox - 1; i >= 0; i--) // left top
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
	for (int i = oy - 1; i >= 0; i--) // top
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
	for (int i = ox + 1; i < length; i++) // top right
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
	for (int i = oy + 1; i < length; i++) // bottom
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
	int j = ox - 1;
	for (int i = oy - 1; i >= 0; i--) // top left1
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
	for (int i = oy - 1; i >= 0; i--) // top right1
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
	for (int i = oy + 1; i <= 7; i++) // bottom left1
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
	for (int i = oy + 1; i < length; i++)  
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