/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 13:24:27 by reiascan          #+#    #+#             */
/*   Updated: 2026/02/25 15:03:19 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*dest_return;

	dest_return = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest_return);
}

char	*ft_strdup(char *src)
{
	int		len_char;
	char	*copy_str;

	len_char = ft_strlen(src);
	copy_str = malloc(len_char + 1); //For the '\0' at the end
	ft_strcpy(copy_str, src);
	return (copy_str);
}

/* void	ft_putstr(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int	main(void)
{
	char *s = "Hola que tal? :)";
	ft_putstr(ft_strdup(s));
	write (1, "\n", 1);
	return (0);
} */
