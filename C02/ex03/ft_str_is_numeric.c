/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:55:45 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/20 18:51:16 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <locale.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	str[] = "01471460";
	char	str1[] = "Bora para o próximo!";
	int	r;
	int	r1;

	r1 = 6;
	r = 5;
	r = ft_str_is_numeric(str);
	r1 = ft_str_is_numeric(str1);
	printf("01471460 = %d\nBora para o próximo! = %d\n", r, r1);
	return (0);
}
*/
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 47 && str[i] < 58)
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
