/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: reiascan <reiascan@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-02-10 15:06:37 by reiascan          #+#    #+#             */
/*   Updated: 2026-02-10 15:06:37 by reiascan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str [i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		else
			i++;
	}
	i = 0;
	j = i - 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			if (!(str[j] >= 97 && str[j] <= 122))
				if (!(str[j] >= 65 && str[j] <= 90))
					if (!(str[j] >= 48 && str[j] <= 57))
						str[i] -= 32;
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
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

int	main(void)
{
	char	str[50];

	ft_strcpy(str, "salut, comment tu vAs ? 42Mots quarante-deux;");
	ft_putstr(ft_strcapitalize(str));
	return (0);
} */
