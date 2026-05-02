/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-12 03:47:39 by reiascan          #+#    #+#             */
/*   Updated: 2026-02-12 03:47:39 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			j++;
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/* #include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	count;

	count = 0;
	while (src[count] != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}

void	ft_putstr(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		write (1, &str[count], 1);
		count++;
	}
}
#include <string.h>

int	main(void)
{
	char	s1[50];
	char	s2[50];

	ft_strcpy(s1, "Aqui se encuentra la palabra CLAVE");
	ft_strcpy(s2, "CLAVE");
	ft_putstr(ft_strstr(s1, s2));
	write (1, "\n", 1);
	ft_strcpy(s1, "Aqui se encuentra la palabra CLAVE");
	ft_strcpy(s2, "CLAVE");
	ft_putstr(strstr(s1, s2));
} */
