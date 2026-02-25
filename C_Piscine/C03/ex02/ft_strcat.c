/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-12 02:30:40 by reiascan          #+#    #+#             */
/*   Updated: 2026-02-12 02:30:40 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
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

	ft_strcpy(s1, "Hola,");
	ft_strcpy(s2, " ya no aguanto mas.");
	ft_putstr(ft_strcat(s1, s2));
	write (1, "\n", 1);
	ft_strcpy(s1, "Hola,");
	ft_strcpy(s2, " ya no aguanto mas.");
	ft_putstr(strcat(s1, s2));

} */
