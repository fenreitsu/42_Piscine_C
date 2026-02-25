/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-12 01:38:02 by reiascan          #+#    #+#             */
/*   Updated: 2026-02-12 01:38:02 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			return (diff);
		}
		i++;
	}
	return (0);
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
#include <string.h>

int	main(void)
{
	char	s1[50];
	char	s2[50];
	unsigned int n;

	n = 0;
	ft_strcpy(s1, "");
	ft_strcpy(s2, "abcd");
	ft_putnbr(ft_strncmp(s1, s2, n));
	write (1, "\n", 1);
	ft_putnbr(strncmp(s1, s2, n));
} */
