/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:11:58 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/20 20:04:21 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <locale.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str[] = "calma";
	char	str1[] = "0u7r0!";
	int	c;
	int	C;
	
	c = 4;
	C = 3;
	c = ft_str_is_lowercase(str);
	C = ft_str_is_lowercase(str1);
	printf("calma:%d\n0u7r0!:%d\n", c, C);
	return (0);
}
*/
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
