/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 12:45:33 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/13 12:46:55 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> // Solo para el printf de prueba

// 1. FUNCIÓN RECURSIVA (Basada totalmente en ft_putnbr)
void	ft_fill_recursive(long nb, char *arr, int *i)
{
	// Si el número tiene más de un dígito, seguimos profundizando
	if (nb >= 10)
		ft_fill_recursive(nb / 10, arr, i);

	// En lugar de write(1, &digit, 1), guardamos en el array
	arr[*i] = (nb % 10) + '0';
	
	// Avanzamos la posición del índice para el siguiente dígito
	*i = *i + 1;
}

// 2. FUNCIÓN PRINCIPAL (La que tú llamarás)
void	ft_putnbr_to_array(int nb, char *arr)
{
	int		i;
	long	n;

	i = 0;
	n = nb;
	// Si es negativo, ponemos el menos y pasamos el número a positivo
	if (n < 0)
	{
		arr[i] = '-';
		i++;
		n = -n;
	}
	
	// Llamamos a la parte recursiva
	ft_fill_recursive(n, arr, &i);
	
	// Ponemos el fin de string para que sea un array válido
	arr[i] = '\0';
}

// EJEMPLO DE USO
int	main(void)
{
	char	mi_lista[12]; // Espacio suficiente para cualquier int

	ft_putnbr_to_array(-2147483648, mi_lista);
	
	printf("Resultado en el array: %s\n", mi_lista);
	return (0);
}


