/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-10 15:58:11 by reiascan          #+#    #+#             */
/*   Updated: 2026-02-10 15:58:11 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count_1;
	unsigned int	count_2;

	count_1 = 0;
	count_2 = 0;
	if (size > 0)
	{
		while (count_1 < size - 1 && src[count_1] != '\0')
		{
			dest[count_1] = src [count_1];
			count_1++;
		}
		dest[count_1] = '\0';
	}
	while (src[count_2] != '\0')
		count_2++;
	return (count_2);
}

/* #include <unistd.h>

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

int main(void)
{
    char *s1;
	char s2[25] = "hello";
	unsigned int n;

	s1 =  "wor";
	n = 0;

	ft_putnbr(ft_strlcpy(s2, s1, n));
	write(1, " ", 1);
	ft_putstr(s2);
    return 0;
} */
