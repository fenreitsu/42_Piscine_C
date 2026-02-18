/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 20:05:38 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/18 21:30:22 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
	{
		i++;
	}
	diff = s1[i] - s2[i];
	return (diff);
}

void ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = i + 1;
	if (argc <= 0)
		return (0);
	while (i < argc)
	{
		while (argv[j])
		{
		
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				ft_swap(&argv[i], &argv[j]);
				i = 1;
				j = i + 1;
			}
			else
			{
				i++;
				j++;
			}
		}
		i++;
	}
	i = 1;
	while (argv[i])
	{
		ft_putstr(argv[i]);
		i++;
	}
}

