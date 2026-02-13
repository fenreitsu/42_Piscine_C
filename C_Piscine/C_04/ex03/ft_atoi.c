/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 01:21:21 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/13 12:42:44 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i;
    int sign;
    int result;

    i = 0;
    sign = 1;
    result = 0;
    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;
    while (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - '0');
        i++;
    }
    return (result * sign);
}

#include <stdio.h>

int ft_atoi(char *str);

int main(int argc, char **argv)
{
    // Verificamos que el usuario haya pasado exactamente un argumento
    if (argc == 2)
    {

        printf("%d\n", ft_atoi(argv[1]));
    }
    else
    {
        printf("Use: Program + \"string\"\n");
    }
    return (0);
}
