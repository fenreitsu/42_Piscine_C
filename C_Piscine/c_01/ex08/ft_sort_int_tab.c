/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-05 16:13:28 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/05 18:50:03 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	count_1;
	int	count_2;
	int	temp;

	count_1 = 0;
	count_2 = count_1 + 1;
	while (count_1 < size -1)
	{
		if (tab[count_1] > tab [count_2])
		{
			temp = tab[count_1];
			tab[count_1] = tab[count_2];
			tab[count_2] = temp;
			count_1 = 0;
			count_2 = count_1 + 1;
		}
		else
		{
			count_1 ++;
			count_2 ++;
		}
	}
}

int main(void)
{
	int	my_array[] = {26, 16, -800, 45, 1, -1000};
	int	size;
	int	j;

	j = -1;
	size = 6;
	ft_sort_int_tab(my_array, size);
	while (++j < size)
		printf("%d,", my_array[j]);
	return (0);
}
