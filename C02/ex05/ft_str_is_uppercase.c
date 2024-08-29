/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 20:06:08 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/20 20:25:09 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	str[] = "MAIS";
	char	str1[] = "M3nO5";
	int	C;
	int	o;

	C = 0;
	o = 3;
	C = ft_str_is_uppercase(str);
	o = ft_str_is_uppercase(str1);
	printf("MAIS - %d\nM3nO5 - %d\n", C, o);
	return (0);
}
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
