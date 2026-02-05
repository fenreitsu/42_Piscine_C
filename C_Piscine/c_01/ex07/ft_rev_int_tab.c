/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-04 18:38:00 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/05 18:49:56 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	last_position;

	last_position = size - 1;
	i = -1;
	while (++i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[last_position - i];
		tab[last_position - i] = temp;
	}
}

/* int main(void)
{
	int	my_array[] = {1, 2, 3, 4, 5, 6};
	int	size;
	int	j;

	j = -1;
	size = 6;
	ft_rev_int_tab(my_array, size);
	while (++j < size)
		printf("%d", my_array[j]);
	return (0);
} */
