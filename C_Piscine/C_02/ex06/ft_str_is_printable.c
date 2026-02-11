/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-10 12:51:36 by reiascan          #+#    #+#             */
/*   Updated: 2026-02-10 12:51:36 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (str[count] >= 32 && str[count] <= 126)
			count++;
		else
			return (0);
	}
	return (1);
}
/* #include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write (1, &str[count], 1);
		count++;
	}
}

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
	char	str[50];

	ft_strcpy(str, "");
	ft_putnbr(ft_str_is_printable(str));
	return (0);
} */
