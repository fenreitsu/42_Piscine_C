/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:10:18 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/01 15:14:20 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int x, int y, int column, int row)
{
	if ((row == 1 || row == y) && column == 1)
	{
		write (1, "A", 1);
	}
	else if ((row == 1 || row == y) && column == x)
	{
		write (1, "C", 1);
	}
	else if (row == 1 || row == y || column == 1 || column == x)
	{
		write (1, "B", 1);
	}
	else
	{
		write (1, " ", 1);
	}
}
