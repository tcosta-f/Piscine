/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 03:53:21 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/21 06:10:36 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str);

int	main(void)
{
	char	str[] = "ola, Tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um"; 
	ft_strcapitalize(str);	
	printf("%s", str);
	return (0);
}
*/
int	ft_alphanumerico(char c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') 
		|| (c >= 'a' && c <= 'z'));
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] + 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && ft_alphanumerico(str[i]))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		if (!ft_alphanumerico(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return (str);
}
