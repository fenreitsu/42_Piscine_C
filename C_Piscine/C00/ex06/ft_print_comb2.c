/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-03 10:31:01 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/03 16:40:59 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num_to_char(int num)
{
	char	first_digit;
	char	second_digit;

	first_digit = (num / 10) + '0';
	second_digit = (num % 10) + '0';
	write (1, &first_digit, 1);
	write (1, &second_digit, 1);
}

void	ft_print_comb2(void)
{
	int	num_1;
	int	num_2;

	num_1 = 0;
	while (num_1 <= 98)
	{
		num_2 = num_1 + 1;
		while (num_2 <= 99)
		{
			write_num_to_char(num_1);
			write (1, " ", 1);
			write_num_to_char(num_2);
			if (!(num_1 == 98 && num_2 == 99))
				write (1, ", ", 2);
			num_2++;
		}
		num_1++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
}*/
