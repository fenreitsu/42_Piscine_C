/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 11:40:30 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/18 12:31:15 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/* #include <unistd.h>

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

int	main(void)
{
	ft_putnbr(ft_is_prime(2));
} */
