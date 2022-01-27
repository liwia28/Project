#include "Board.h"
//this is the board for our pieces. It is made in such way that when 2 is black rook when -2 is its opponent, the white rook

int boardcells[8][8] =
{2, 3, 4, 5, 6, 4, 3, 2,
  1, 1, 1, 1, 1, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0,
-1,-1,-1,-1,-1,-1,-1,-1,
-2,-3,-4,-5,-6,-4,-3,-2,
 };