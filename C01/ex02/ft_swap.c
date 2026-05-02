/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-04 15:50:22 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/05 18:49:08 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/* int	main(void)
{
	int	value_1 = 569;
	int	value_2 = -456;

	printf("Original value_1: %d\n", value_1);
	printf("Original value_2: %d\n", value_2);
	ft_swap(&value_1, &value_2);
	printf("------------------\n");
	printf("Swapped value_1: %d\n", value_1);
	printf("Swapped value_2: %d\n", value_2);
	return (0);
} */
