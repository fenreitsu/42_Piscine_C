/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 12:56:23 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/01 15:33:56 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int column, int row);

void	rush(int x, int y)
{
	int	column;
	int	row;

	column = 1;
	row = 1;
	if (x <= 0 || y <= 0 || x > 2147483647 || y > 2147483647)
	{
		write(1, "X and Y must be greater than 0 and less than 2147483647", 55);
	}
	else
	{
		while (row <= y)
		{
			while (column <= x)
			{
				ft_putchar (x, y, column, row);
				column++;
			}
			write (1, "\n", 1);
			column = 1;
			row++;
		}
	}
}
