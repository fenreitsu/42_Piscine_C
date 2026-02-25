#include <unistd.h>

int	is_safe(int board[4][4], int row, int col, int num);

int	solve(int board[4][4], int tab[16], int position)
{
	int	row;
	int	col;
	int	num;

	row = position / 4;
	col = position % 4;
	num = 1;
	if (position == 16)
	{
		return (1);
	}
	while (num <= 4)
	{
		if (is_safe(board, row, col, num) == 1)
		{
			board[row][col] = num;
			if (solve(board, tab, position + 1))
				return (1);
			board[row][col] = 0;
		}
		num++;
	}
	return (0);
}
