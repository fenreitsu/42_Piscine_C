/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 09:26:53 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/16 21:08:46 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	digit;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = nb * (-1);
		write (1, "-", 1);
		ft_putnbr(nb);
	}
	else
	{
		digit = (nb % 10) + '0';
		if (nb / 10 != 0)
			ft_putnbr((nb / 10));
		write (1, &digit, 1);
	}
}

/* int main(void)
{
	int number = -45;
	ft_putnbr(number);
} */
