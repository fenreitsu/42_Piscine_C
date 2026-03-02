/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/27 13:33:25 by reiascan          #+#    #+#             */
/*   Updated: 2026/03/01 16:54:51 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>


int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	len;
	int	i;

	i = 0;
	if (min >= max)
	{
		arr = NULL;
		return (0);
	}
	else
	{
		len = max - min;
		arr = malloc(sizeof(int) * len);
		if (!arr) //esta comprobacion es para revisar que malloc no ha fallado y
		//cumple con retornar "-1" si hay otro problema"
			return (-1);
		*range = arr; //Tengo que asegurarme de que el puntero *range, tenga el
		// valor que necesito, "arr" es sólo un puntero que cree porque no sé
		// como hacerlo sin la variable, pero si sabes como ahorrartela mejor.
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		return (len);
	}
}

#include <unistd.h>

void	ft_putnbr(int nbr)
{
	int	digit;

	if (nbr == -2147483648)
		write (1, "-2147483648", 11);
	else if (nbr < 0)
	{
		write (1, "-", 1);
		ft_putnbr(-nbr);
	}
	else
	{
		digit = (nbr % 10) + '0';
		if (nbr > 9)
			ft_putnbr(nbr / 10);
		write (1, &digit, 1);
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		write (1, &str[i], 1);
	}
}

int	main(void)
{
	int	i;
	int	range;
	int	*arr;

	i = 0;
	range = ft_ultimate_range(&arr, -7, 15);
	ft_putstr("· Este es el rango: ");
	ft_putnbr(range);
	if (range == 0)
		ft_putstr("\n· No hay array :(\n");
	else
	{
		ft_putstr("\n· Este es el array {");
		while (i < range)
		{
			ft_putnbr(arr[i]);
			if (i < range - 1)
				write (1, ", ", 2);
			i++;
		}
		write (1, "\x7D\n", 2);
	}
}
