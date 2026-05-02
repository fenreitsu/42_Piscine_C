/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base(ESTE NO) copy.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 15:33:36 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/16 16:21:31 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

//To copy the int limit into the array

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

//to fill the array digit to digit
void	ft_fill_arr(long nbr, char *arr, int *i)
{
	if (nbr >= 10)
		ft_fill_arr((nbr / 10), arr, i);
	arr[*i] = (nbr % 10) + '0';
	*i += 1;
}

//to
void	ft_putnbr_to_str(int nbr, char *arr)
{
	int	i;
	long n;

	i = 0;
	n = nbr;
	if (n < 0)
	{
		arr[i] = '-';
		i++;
		n = -n;
	}
	ft_fill_arr(n, arr, &i);
	arr[i] = '\0';
}
void	ft_translate(unsigned char c, char *base, int size)
{
	write (1, &base[((c - '0') / size)], 1);
	write (1, &base[(c - '0') % size], 1);
}

void	ft_putbnbr_base(int nbr, char *base)
{
	int	i;
	int	size;
	char	numbers[12];

	i = 0;

	ft_putnbr_to_str(nbr, numbers);
	size = ft_strlen(numbers);
	while (numbers[i] != '0')
	{
		ft_translate(numbers[i], base, size);
		i++;
	}
}

#include <stdio.h>

int	main(void)
{
	char	numbers[12];
	ft_translate('15', "0123456789ABCDEF", 16);
	// ft_putbnbr_base(1, "0123456789ABCDEF");
	ft_putnbr_to_str(-2147483648, numbers);
	printf("\n%s", numbers);
	return (0);
}
