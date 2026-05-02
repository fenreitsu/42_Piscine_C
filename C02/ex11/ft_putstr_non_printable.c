/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-10 17:48:11 by reiascan          #+#    #+#             */
/*   Updated: 2026-02-10 17:48:11 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_tr_hexadecimal(unsigned char c)
{
	char	*hex_table;

	hex_table = "0123456789abcdef";
	write(1, &hex_table[c / 16], 1);
	write(1, &hex_table[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		if (!(str[count] >= 32 && str[count] <= 126))
		{
			write(1, "\\", 1);
			ft_tr_hexadecimal(str[count]);
			count++;
		}
		else
		{
			write(1, &str[count], 1);
			count++;
		}
	}
}

/* int	main(void)
{
	char	*quoute;

	quoute = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(quoute);
	return (0);
} */
