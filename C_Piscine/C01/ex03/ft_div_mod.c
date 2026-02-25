/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-04 16:37:31 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/05 18:49:16 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int	value_1;
	int	value_2;
	int	result_div;
	int	result_mod;

	value_1 = 45;
	value_2 = 10;
	ft_div_mod(value_1, value_2, &result_div, &result_mod);
	printf("division: %d\nmodulo: %d\n", result_div, result_mod);
	return (0);
} */
