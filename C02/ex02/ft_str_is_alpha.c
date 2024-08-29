/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:55:10 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/20 17:54:12 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>
#include <locale.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	str[] = "O14 c0leg4";
	char	str1[] = "TudoBem";
	int	r;
	int	r1;

	r = 3;
	r1 = 5;
	r = ft_str_is_alpha(str);
	r1 = ft_str_is_alpha(str1);
	setlocale(LC_ALL, "Portuguese");
	printf ("O14 c0leg4 = %d\nTudoBem = %d\n", r, r1);
	return (0);
}
*/
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') 
			|| (str[i] >= 'a' && str[i] <= 'z')) 
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
