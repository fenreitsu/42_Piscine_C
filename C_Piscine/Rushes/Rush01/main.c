/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   custom.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmitrovi <mmitrovi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 10:32:07 by mmitrovi          #+#    #+#             */
/*   Updated: 2026/02/08 16:51:48 by mmitrovi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int solve(int board[4][4], int tab[16], int position);

void	display_board(int board[4][4])
{
	int	i;
	int	j;
	char	c;
	i = - 1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			c = board[i][j] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
		}
		write(1, "\n", 1);
	}
}

int is_safe(int board[4][4], int row, int col, int num)
{
	int i;
	i = 0;
	while ( i < 4)
	{
		if (board[row][i] == num)
			return (0);
		if (board[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	tab[16];
	int	board[4][4];
	int	row;
	int col;
	if(argc != 2)
		return(write(1, "Error\n", 6),0);
	i = -1;
	j = 0;
	while (argv[1][++i] != '\0')
	{
		if ( argv[1][i] >= '1' && argv[1][i] <= '4')
			tab[j++] = argv[1][i] - '0';
	}
	if (j != 16)
	{
		return(write(1, "Error\n", 6),0);
	}
	row = -1;
	while (++row < 4)
	{
		col = -1;
		while (++col < 4)
			board[row][col] = 0;
    }
	if (solve(board, tab, 0))
	display_board(board);
	else
	{
	return(write(1, "Error\n", 6),0);
	}
}
