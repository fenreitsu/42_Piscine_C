/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:33:36 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/17 19:19:02 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

int	ft_errors_validation(char *base, int size)
{
	int	i;
	int	j;

	i = 0;
	if (size <= 1)
		return (0);
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		len;

	len = ft_strlen(base);
	if (ft_errors_validation(base, len) == 1)
	{
		if (nbr == -2147483648)
		{
			ft_putnbr_base(nbr / len, base);
			write (1, &base[-(nbr % len)], 1);
		}
		else if (nbr < 0)
		{
			write (1, "-", 1);
			ft_putnbr_base(-nbr, base);
		}
		else
		{
			if (nbr / len != 0)
				ft_putnbr_base((nbr / len), base);
			write (1, &base[(nbr % len)], 1);
		}
	}
}

/* int	main(void)
{
	ft_putnbr_base(-126, "0123456789");
	write (1, "\n", 1);
	ft_putnbr_base(-126, "0123456789ABCDEF");
	write (1, "\n", 1);
	ft_putnbr_base(-126, "poniguay");
	write (1, "\n", 1);
	ft_putnbr_base(-126, "");
	write (1, "\n", 1);
	ft_putnbr_base(-126, "01");
	write (1, "\n", 1);
	ft_putnbr_base(-2147483648, "0123456789");
	write (1, "\n", 1);
	return (0);
} */
