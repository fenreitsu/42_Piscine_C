/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-04 17:13:36 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/05 18:49:27 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
/* int	main(void)
{
	int	value_1;
	int	value_2;

	value_1 = 456;
	value_2 = 20;
	ft_ultimate_div_mod(&value_1, &value_2);
	printf("division: %d\nmodulo: %d\n", value_1, value_2);
	return (0);
} */
