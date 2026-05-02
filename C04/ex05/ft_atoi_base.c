/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/17 15:35:48 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/19 21:04:50 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (size < 2)
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

int	get_number(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
		{
		if (c == base[i])
			return (i);
		i++;
		}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	len;

	i = 0;
	sign = 1;
	result = 0;
	len = ft_strlen(base);
	if (ft_errors_validation(base, len) == 0)
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			sign *= -1;
		i++;
	}
	while (get_number(str[i], base) != -1)
	{
		result = (result * len) + get_number(str[i], base);
		i++;
	}
	return (result * sign);
}

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int	digit;
	if (nbr == -2147483648)
	{
		write (1, "-2147483648", 11);
	}
	else if (nbr < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nbr);
	}
	else
	{
		if (nbr / 10 != 0)
			ft_putnbr(nbr / 10);
		digit = (nbr % 10) + '0';
		write (1, &digit, 1);
	}
}

int	main(void)
{
	ft_putnbr(ft_atoi_base("nn", "regina"));
}
