/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 15:09:26 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/27 13:27:57 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ptr_n;
	int	len_arr;
	int	i;

	i = 0;
	if (min >= max)
		ptr_n = NULL;
	else
	{
		len_arr = (max - min);
		ptr_n = malloc(len_arr * 4); // fot the total lenght in bytes
	//	ptr_n = malloc(len_arr * sizeof(int)) ---> SAFER, if "int" has another
	//	value different than 4 bytes.
		while (min < max)
		{
			ptr_n[i] = min;
			i++;
			min++;
		}
	}
	return (ptr_n);
}

/* #include <unistd.h>

void	ft_putnbr(int nb)
{
	int	digit;

	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else if (nb < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nb);
	}
	else
	{
		if (nb / 10 != 0)
			ft_putnbr(nb / 10);
		digit = (nb % 10) + '0';
		write (1, &digit, 1);
	}
}

int	main(void)
{
	int	*arr;
	int len;
	int i;

	i = 0;
	arr = ft_range(1, 7);
	len = 7 - 1; //you can't use sizeof(arr)/4 to determine the size because
	//"arr" is a pointer not an array.
	while (i < len)
	{
		ft_putnbr(arr[i]);
		i++;
	}
	return (0);
} */
