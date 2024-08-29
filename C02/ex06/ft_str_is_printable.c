/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcosta-f <tcosta-f@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 21:22:49 by tcosta-f          #+#    #+#             */
/*   Updated: 2023/12/21 19:02:52 by tcosta-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	str[] = "$Pr!nt4b/e!";
	char	str1[] = "\x01\x02\x03";
	int	x;
	int	z;

	x = 3;
	z = 7;
	x = ft_str_is_printable(str);
	z = ft_str_is_printable(str1);
	printf("$Pr!nt4b/e! - %d\n", x);
	printf("\x01\x02\x03 - %d\n", z);
	return (0);
}
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32) && (str[i] <= 127))
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
